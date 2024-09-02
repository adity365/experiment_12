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