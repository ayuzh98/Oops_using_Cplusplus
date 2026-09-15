#include<iostream>
using namespace std;
class Student {
public:
    string name;
    int rollno;
    float gpa;
       Student(string n, int r, float g) { //parameterised costructor
        name = name;
        rollno = r;
        gpa = g;
    }
    Student(){ //default constructor

    }
};

int main() {
    
    Student s3 ;
    s3.name = "zack";
    s3.rollno = 96;
    s3.gpa = 9.6;
    Student s2("earth", 99, 9.87);

    return 0;}