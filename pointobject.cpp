#include<iostream>
using namespace std;

class Cricketer {
public:
  string name;
  int runs;
  float avg;

  Cricketer(string name, int runs,float avg){
    this->name = name;
    this->runs = runs;
    this->avg = avg;
  }
};
void change(Cricketer* c){
  c-> avg = 68.4; //same meaning (*c).avg = 77.2;
}

int main(){
  Cricketer c1("virat kohli",250,55.2);
//   cout<<c1.avg<<endl;
// change(&c1);
//     cout<<c1.avg<<endl;
 
//  Cricketer c2("rohit sharma",200,50.4);
Cricketer* p1 = &c1;
cout<<p1->avg<<endl;
cout<<c1.avg<<endl;
 p1->avg = 77.5;
cout<<c1.avg<<endl;

}
 // Cricketer c2("rohit sharma",200,50.4);
// Cricketer* p1 = &c1;
// cout<<(*p1).runs<<endl;
// cout<<c1.avg<<endl;
// (*p1).avg = 77.5;
// cout<<c1.avg<<endl;

  // int x= 4;
  // cout<<&x<<endl;
  // int* p = &x; 
  // cout<<p<<endl;
  // cout<<*p<<endl;

  // *p =100; // x= 100
  //  cout<<x<<endl;