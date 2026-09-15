#include<iostream>
using namespace std;
// this blue print of the object 
class Student {
	// student is new data type 
public:
    string name;
    int rollno;
    float gpa;
};

int main() {
    Student s1;

    cout << "Enter name = ";
    cin >> s1.name;

    s1.rollno = 98;
    s1.gpa = 9.6;

    Student s2;
    s2.name = "Ayush2";
    s2.rollno = 96;
    s2.gpa = 9.9;

    cout << s1.name << " " << s1.rollno << " " << s1.gpa << endl;
    cout << s2.name << " " << s2.rollno << " " << s2.gpa << endl;

    return 0;
}