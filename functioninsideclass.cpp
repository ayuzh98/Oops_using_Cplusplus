#include <iostream>
using namespace std;
class Cricketer{
public:
	string name;
	int runs;
	int avg;
	Cricketer(string name, int runs, int avg){
	this->name=name;
	this->runs=runs;
	this->avg = avg;}
void print(int runs){
	cout<<this->name<<" "<<this->runs<<this->avg<<endl;
	cout<<runs<<endl;
}
int matches(){
	return runs/avg;
}
};
// void print(Cricketer c){
// 	cout<<c.name<<" "<<c.runs<<endl;
// }
int main(){

	Cricketer c1("virat",568,89);

	Cricketer c2("Rohit",456,85);
	// print(c1);
	// print(c2);
	c1.print(100);
	c2.print(100);

	cout<<c1.matches()<<endl;
	cout<<c2.matches()<<endl;

	return 0;
}