#include<iostream>
#include "student.cpp"
using namespace std;

class Car {
    public:
    char name[50];
    int modelNo;
    int price;
    int noOfSeats;
};


int main(){

    Student s1;
    s1.rollNumber = 2;
    cout << s1.rollNumber << endl;
    return 0;
}