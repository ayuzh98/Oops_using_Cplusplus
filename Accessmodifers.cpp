
#include<iostream>
using namespace std;
class Student{
  public :
  int rno ;
  string name ;
     Student (int r,string n,float m){
       rno = r;
        name = n;
        marks = m;
    }
  float getMarks(){ //getter
        return marks;
    }
    void setMarks(float m){ //setter
      marks = m;
    }
  // void display (){
  //   cout<<name<<" "<<marks<<" "<<rno<<endl;
  // }
  private:
  float marks;
};
int main(){
Student s1(76,"ayush singh",92.5);
// s1.display();
s1.setMarks(986);
 cout << s1.getMarks() << endl;
}