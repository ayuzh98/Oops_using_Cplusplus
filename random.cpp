#include <iostream>
using namespace std;
class Topper
{
public:
  string name;
  int number;
  float cgp;
  int subject;
  Topper()
  { // Default constructor
  }
  Topper(string name, int number, float cgp, int subject)
  {
    this->name = name;
    this->number = number;
    this->cgp = cgp;
    this->subject = subject;
    //   name = s;
    //   number = t;
    //  cgp = d;
    //  subject = k;
  }
  // void output() 
  void output (int number = 0)//default argumnet (agar koi value nahi mile to 0 use karo”)
  //Value diya → wahi use
// Value nahi diya → default use
  {
    cout << name << " " <<this->number << " " << cgp << " " << subject << endl;
    // cout<<this->name<<" "<<this->number<<" "<<this->cgp<<" "<<this->subject<<endl; // object ke attribute ki hi bat ho rha hai.
    cout<<number<<endl;
  }
  int avgmrk(){
    return number/subject;
  }
};
void change(Topper &t2, Topper &t3, int k=0){ //passby refernce
  t2.name = "Askohka";
  t3.name = "Elon";
  cout<<k<<endl;
}

 


int main()
{
  Topper t1("ayush", 98, 9.9, 5);
  t1.number = 100;

  Topper t2("earth", 89, 8.9, 5);

  Topper t3;
  t3.cgp = 9.76;
  t3.name = "helloworld";
  t3.number = 98;
  t3.subject = 5;
   
  Topper t4 (t2);

  Topper t5 = t3;
  change(t2, t3, 10);
  t1.output(6);
  t2.output();
  t3.output(7);
  t4.output();
  t5.output();


cout << t1.avgmrk() << " " << t2.avgmrk() << " " << t3.avgmrk() << endl;
  
}