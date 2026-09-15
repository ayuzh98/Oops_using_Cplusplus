#include<iostream>
#include<string>
using namespace std;

class Student{

public:

    // Attributes
    int id;
    int age;
    string name;
    int nos;

    // Default constructor
    Student(){
        cout << "Student default ctor called" << endl;
    }

    //paramertized constructor
    

    // Methods
    void study(){
        cout << this->name << " studying" << endl;
    }

    void sleep(){
        cout <<this-> name << " sleeping" << endl;
    }

    void bunk(){
        cout <<this-> name << " bunking" << endl;
    }

    // Destructor
    ~Student(){
        cout << this->name<<"Student default dtor called" << endl;
    }
};

int main(){

    Student a1;

    a1.id = 1;
    a1.age = 15;
    a1.name = "Ayush";
    a1.nos = 6;


    Student a2;

    a2.id = 2;
    a2.age = 16;
    a2.name = "earth";
    a2.nos =36;



    a1.study();
    a1.sleep();
    a1.bunk();

    a2.study();

    return 0;
}