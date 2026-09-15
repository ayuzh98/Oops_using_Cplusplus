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


int main(){
Cricketer c1("virat kohli",250,55.2);
// Cricketer c2("rohit sharma",200,50.4); 
Cricketer* c2 = new Cricketer("rohit sharma",200,50.4); 

cout<<c1.name<<" "<<c1.runs<<endl;
cout<<(*c2).name<<" "<<(*c2).runs<<endl;
}