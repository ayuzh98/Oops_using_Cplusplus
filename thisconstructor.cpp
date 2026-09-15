#include<iostream>
using namespace std;

class Cricketer {
public:
  string name;
  int runs;

  Cricketer(string name, int runs){
    this->name = name;
    this->runs = runs;
  }
};

void output(Cricketer c){
  cout << c.name << " " << c.runs << endl;
}

int main(){
  Cricketer c1("virat kohli",250);
  Cricketer c2("rohit sharma",200);

  output(c1);
  output(c2);
}