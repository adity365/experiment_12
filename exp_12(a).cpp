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