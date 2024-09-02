#include <iostream>
#include <cstring>
using namespace std;

class student {
    int rno;
    char name[50];
    double fee;
public:
    student(int, char[], double);
    student(student &t); // copy constructor
    void display();
};

student::student(int no, char n[], double f) {
    rno = no;
    strcpy(name, n);
    fee = f;
}

student::student(student &t) {
    rno = t.rno;
    strcpy(name, t.name);
    fee = t.fee;
}

void student::display() {
    cout << endl << rno << "\t" << name << "\t" << fee;
}

int main() {
    student s(1001, "Manjeet", 1000);
    s.display();

    student manjeet(s); // copy constructor called
    manjeet.display();

    return 0;
}
