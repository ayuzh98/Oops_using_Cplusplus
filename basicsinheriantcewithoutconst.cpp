#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;
    int rollno;

    Person(){
        cout<<"parent constructor"<<endl;
    };

};

class Student : public Person{
public:
    float grade;

    Student(){
        cout<<"Student constructor"<<endl;
    }

    void getinfo(){
        cout << name << " "
             << age << " "
             << rollno << " "
             << grade << endl;
    }
};

int main(){


    Student s1;
    s1.name = "ayush";
    s1.age = 19;
    s1.rollno = 21;
    s1.grade = 9.5;

    s1.getinfo();

    return 0;
}