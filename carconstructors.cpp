
#include<iostream>
using namespace std;

class Car {
public:
  string name;
  int price;
  int seats;
  string type;
  
  //constructor
  Car (int p , string s, string j , int k){
name = j;
price = p;
seats = k;
type = s;
  }
};

void print(Car c){
  cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}
void change(Car& c){  //c and c1 are are shallow copy
  c.name = "Audi A8";
}

int main(){
  Car c1 (150000,"Seden","Honda city",5);
  // c1.name = "Honda city";
  // c1.price = 15236;
  // c1.seats = 5;
  // c1.type = "sedan";
   
  print(c1);
  change(c1);//pass by value
  print(c1);

  

  // Car c2;
  // c2.name = "benz";
  // c2.price = 565236;
  // c2.seats = 4;
  // c2.type = "rich class";

  // print(c1);
  // print(c2);
}