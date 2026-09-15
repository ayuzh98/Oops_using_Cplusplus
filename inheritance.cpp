#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;
    int rollno;

    Person(string name, int age, int rollno){
        this->name = name;
        this->age = age;
        this->rollno = rollno;
    }
     void getinfo(){
        cout << name << " "
             << age << " "
             << rollno << " "
              << endl;
    }
};

class Student : public Person{
public:
    float grade;

    Student(string name, int age, int rollno, float grade)
        : Person(name, age, rollno)//calling and (passing the value)intizailisation of student objects
    {
        this->grade = grade;
    }

    void getinfo(){
        cout << name << " "
             << age << " "
             << rollno << " "
             << grade << endl;
    }
};

int main(){

    Person p1("Ayush", 19, 21);

    p1.getinfo();
    Student s1("earth", 9, 23, 9.6);

    s1.getinfo();
     s1.rollno = 22;
     s1.getinfo();
      p1.getinfo();

    return 0;
}