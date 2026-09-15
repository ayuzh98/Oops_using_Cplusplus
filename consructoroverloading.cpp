#include<iostream>
using namespace std;
class Student{// Student is a New data type
  public :
  string name ;
  int rno;
  float gpa;
  
  Student(){//default constructor

  }

  Student (string s,int r,float g){ //parameterised constructor
    name = s;
    rno = r;
    gpa = g;
  }
};
void print(Student s){
  cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;}
int main(){

  Student s1("Ayush singh",96,9.4);
  // s1.name = "Raghav Garg";
  // // s1.rno  = 76;
  // s1.gpa  = 8.2;
  // cout<<"enter ";
  // cin>>s1.rno;

Student s2;
   s2.name = "Raghav";
   s2.rno  = 02;
   s2.gpa  = 9.2;
print(s1);
print(s2);
}