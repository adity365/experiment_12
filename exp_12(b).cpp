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