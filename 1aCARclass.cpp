#include<iostream>
using namespace std;
class Car {
public:
	string name ;
	int price ;
	int seats;
	string type;
};
void print(Car c){
 cout << c.name << " " << c.price << " " << c.seats << " " << c.type<<endl;
}
int main(){
Car c1;
c1.name = "honda city";
c1.price = 15000;
c1.seats = 5;
c1.type = "suv";
Car c2;
c2.name = "bmw";
c2.price = 16000;
c2.seats = 6;
c2.type = "permium";
print(c1);
print(c2);
	return 0;
}