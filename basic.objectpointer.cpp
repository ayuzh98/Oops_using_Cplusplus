#include<iostream>
using namespace std;
class Student {
public:
  int marks;
};

void change(Student* s){
  s->marks=98;
}

int main() {
  Student s1;        // object
  Student* p = &s1;  // object pointer

  s1.marks = 90;
cout<<(*p).marks<<endl;
change(&s1);
  cout << p->marks;  // access using pointer
  //cout<<(*p).marks;
}