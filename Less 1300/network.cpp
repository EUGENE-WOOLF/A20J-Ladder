#include <iostream>
#include <cstring>
#include <unistd.h>
#include <arpa/inet.h>

using namespace std;

int main() {
    int server_fd, client_socket;
    sockaddr_in server_addr{}, client_addr{};
    socklen_t client_len = sizeof(client_addr);

    // 1. Create socket
    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (server_fd == 0) {
        perror("socket failed");
        return 1;
    }

    // 2. Bind
    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(8081);

    if (bind(server_fd, (sockaddr*)&server_addr, sizeof(server_addr)) < 0) {
        perror("bind failed");
        return 1;
    }

    // 3. Listen
    if (listen(server_fd, 5) < 0) {
        perror("listen failed");
        return 1;
    }

    cout << "Server listening on port 8080...\n";

    while (true) {
        // 4. Accept
        client_socket = accept(server_fd, (sockaddr*)&client_addr, &client_len);
        if (client_socket < 0) {
            perror("accept failed");
            continue;
        }

        cout << "Client connected\n";

        // 5. Read
        char buffer[1024] = {0};
        int bytes = read(client_socket, buffer, sizeof(buffer));

        if (bytes > 0) {
            cout << "Received: " << buffer << endl;

            // 6. Write
            const char* response = "Hello from server\n";
            send(client_socket, response, strlen(response), 0);
        }

        close(client_socket);
    }

    close(server_fd);
    return 0;
}