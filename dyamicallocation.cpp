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
// Cricketer c1("virat kohli",250,55.2);
// Cricketer c2("rohit sharma",200,50.4); 

int* ptr = new int(4);//dyanmic alloction hai aur ye heap store ho rha hai 
cout<<*ptr<<endl;
// int x= 6;
// cout<<x<<endl;
// int* ptr = &x;
// cout<<*ptr<<endl;
}