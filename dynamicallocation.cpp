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
	this->avg = avg;
};
};
int main(){

	// Cricketer c1("virat",568,89);

	Cricketer* c2 = new Cricketer("Rohit",456,85);
	

			// cout<<(*c2).name<<" "<<(*c2).runs<<endl;
		cout<<c2->name<<" "<<c2->runs<<endl;


	// int* ptr = new int(5248);
	// cout<<*ptr<<endl;



	
	return 0;
}