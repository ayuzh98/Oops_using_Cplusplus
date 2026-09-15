#include<iostream>
using namespace std;
class Student{// Student is a New data type
  public :
  string name ;
  int rno;
  float gpa;
};
int main(){
  Student s1;
  s1.name = "Raghav Garg";
  // s1.rno  = 76;
  s1.gpa  = 8.2;
  cout<<"enter ";
  cin>>s1.rno;

    Student s2;
  s2.name = "Ayush Singh";
  s2.rno  = 02;
  s2.gpa  = 9.2;

cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
}