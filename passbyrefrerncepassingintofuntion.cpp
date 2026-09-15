#include<iostream>
using namespace std;

class Car {
public:
  string name;
  int price;
  int seats;
  string type;
};

void print(Car c){
  cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}
void change(Car& c){
  c.name = "Audi A8";
}

int main(){
  Car c1;
  c1.name = "Honda city";
  c1.price = 15236;
  c1.seats = 5;
  c1.type = "sedan";
   
  print(c1);
  change(c1);//pass by refernce
  print(c1);

  

  // Car c2;
  // c2.name = "benz";
  // c2.price = 565236;
  // c2.seats = 4;
  // c2.type = "rich class";

  // print(c1);
  // print(c2);
}
