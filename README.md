# experiment_12
To study constructors and types of constructors in Object Oriented Programming
## AIM: 
Learn how to implement constructor inside and outside the class, how to implement default and parameterized Constructor

## Software Used : VS – Code 

## THEORY :
In C++, a constructor is a special member function of a class that is automatically called when an object of that class is created. The main purpose of a constructor is to initialize objects of its class.
Types of constructors :
1.	## Default :
A constructor that takes no arguments.

2.	## Parametrized :
A constructor that takes arguments to initialize an object with specific values.

## CODE
```
// defining the constructor inside the class

# include <iostream>
using namespace std;

class student {
    int rollno;
    char name[50];
    double fee;
    public:
    student()
    {
        cout << "Enter the RollNo : " << endl;
        cin >> rollno;
        cout << "Enter the Name : " << endl;
        cin >> name;
        cout << "Enter the fee : " << endl;
        cin >> fee;
    } 
    void display(){
        cout << endl << rollno << "/t" << name << "/t" << fee;
    }
};

int main(){
    student s;// constructor gets called automatically when we create the object of the class

    s.display();
    return 0;
}
```
```
// defining the constructor outside the class

# include <iostream>
using namespace std;

class student {
    int rno;
    char name[50];
    double fee;
    public:
    student();
    void display();
};
student::student(){
    cout << "Enter the roll number " << endl;
    cin >> rno;
    cout << "Enter the name of the Student " << endl;
    cin >> name;
    cout << "Enter the fee amount " << endl;
    cin >> fee;
}

void student::display(){
    cout << endl << rno << "/t" << name << "/t" << fee;
}
int main(){
    student s;
    s.display();
    return 0;

}
```
```
// dafault constructors

# include<iostream>
# include<string>
using namespace std;

class Data{
    string name;
    int roll_no;
    char dept[50];
    int batch;

    public:
    Data(){
        cout << "Name : " << endl;
        cin>> name ;
        cout << " Roll No : " << endl;
        cin >> roll_no;
        cout << " Department : " << endl;
        cin >> dept;
        cout << "Batch : " << endl;
        cin >> batch;
    }
    void display(){
        cout << endl << "DETAILS : " << endl << name << " " << roll_no << " " << dept << " " << batch << endl;

    }

};

int main(){
    Data d1;
    d1.display();
}
```
```
// Parameterised Constructors

# include <iostream>
using namespace std;

// defining parameterised constructor
class Num{
    // int a = 7, b = 9;
    public:
    Num(int c , int d){
        if(c>d){
            cout << c << "is greater " << endl;
        }
        else{
            cout << d << " is greater " << endl;
        }
    }
};
int main(){
    Num n1(4,3);
}
```
```
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

```
## OUTPUT

<img width="358" alt="image" src="https://github.com/user-attachments/assets/3405a696-db7d-4125-8d05-253d8b59744d">

![image](https://github.com/user-attachments/assets/4125fa05-f9b2-4e73-8f21-2936c9e3904f)

![image](https://github.com/user-attachments/assets/91276cc6-48f2-4f97-8751-23e3f7655496)

![image](https://github.com/user-attachments/assets/5d254580-5fcb-4166-a3fe-1c1bdc08823b)

![image](https://github.com/user-attachments/assets/7da3f071-d7d6-43d9-aa70-60abe6b3092d)




