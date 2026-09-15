#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string name;
    int rollno;
};

class Teacher : public Student {
public:
    string subject;
    double salary;
};

class TA : public Student, public Teacher {
public: 
};

int main() {

    TA t1;

    t1.name = "tony";  
    t1.subject = "csoops";

    cout << t1.name << " "
         << t1.subject << endl;

    return 0;
}