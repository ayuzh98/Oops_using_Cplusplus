#include<iostream>
using namespace std;
class Car {
public:
	string name ;
	int price ;
	int seats;
	string type;
};
void print(Car ); //function prototype
void change(Car& c){ //PASS BY REFERNCE 
	c.name = "Ayushcar";
	c.price = 98;
	c.seats = 9;
	c.type = "vip";
}
int main(){
Car c1;
c1.name = "Honda city";
c1.price = 15000;
c1.seats = 5;
c1.type = "suv";
print(c1);
change(c1);
print(c1);
	return 0;
}
void print(Car c){
 cout << c.name << " " << c.price << " " << c.seats << " " << c.type<<endl;
}