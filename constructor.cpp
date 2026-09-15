#include<iostream>
using namespace std;

class Student{ //Student is the data type (class name)
 //Student is a user-defined data type
public:
  string name;
  int rno;
  float gpa;

  Student(){ } // default constructor

  Student(int r){  
    rno = r;
  }

  Student(string s, int k){
    name = s;
    rno = k;
  }

  Student(string f, int v, float j){
    name = f;
    rno = v;
    gpa = j;
  }
  Student(int v, float j, string f){
    name = f;
    rno = v;
    gpa = j;
  }
};

void print(Student s){
  cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
}

int main(){
  Student s1("Ayush singh",86);
  s1.gpa = 9.6;
  s1.rno = 97;

  Student s2;
  s2.name = "Raghav";
  s2.rno  = 2;
  s2.gpa  = 9.2;

  Student s3("gagaan",13,9.2); // “Create a variable s3 of type Student”
  //Student because it is the class (data type) used to create object s3.
  Student s5(84,8.6,"Piyush");

  Student s4(82);
  s4.gpa = 8.13;
  s4.name = "Ram";

  Student s6 = s1; //deep constructor
  s6.name = "manish";
   
  Student s7(s1); //copy constructor -deep constructor
  s7.name = "vijay";

  print(s1);
  print(s2);
  print(s3);
  print(s4);
  print(s5);
  print(s6);
  print(s7);
  
}