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
  void output(int runs){// Ye function object ki details print karta hai + extra value bhi print karta hai
     cout << name << " " << this->runs << " "<<avg<< endl;
    // cout << this-> name << " " <<this-> runs << " "<<this->avg<< endl;
  // cout << name << " " << runs << " "<<avg<< endl;
  cout<<runs<<endl;
}
int matches(){
  return runs/avg;
}
};



int main(){
  Cricketer c1("virat kohli",250,55.2);
  Cricketer c2("rohit sharma",200,50.4);

  c1.name = "sachin";
  c1.output(5);
  c2.output(7);
  
  cout<<c1.matches()<<endl;
  cout<<c2.matches()<<endl;
}