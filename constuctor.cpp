#include<iostream>
using namespace std;

class Student {
public:
    string name;
    int rollno;
    float gpa;

    Student(string name, int rollno, float gpa) { //parameterised costructor
        this->name = name;
        this->rollno = rollno;
        this->gpa = gpa;
    }
    Student(){ //default constructor

    }
     Student(int rollno, string name){
     this->name = name;
     this->rollno = rollno;
     }
};
void print(Student s);
void change(Student& s);

int main() {
    Student s1("Ayush", 98, 9.9);

    Student s2("earth", 99, 9.87);

    Student s3 ;
    s3.name = "zack";
    s3.rollno = 96;
    s3.gpa = 9.6;

    Student s4(1500,"ITACHI");
    //copy constructor
    Student s5 = s1; //deep copy
    Student s6(s2); //copy constructor--deep copy

    s6.name = "Mars";

    print(s1);
    change(s1);
    print(s1);
    print(s2);
    print(s3);
    print(s4);
    print(s5);
    print(s6);

    return 0;
}



void print(Student s) {
    cout << s.name << " " << s.rollno << " " << s.gpa << endl;
    return;
}

void change(Student& s) {
    s.name = "Ayuser";
    s.rollno = 100;
    s.gpa = 10.0;
    return ;
}