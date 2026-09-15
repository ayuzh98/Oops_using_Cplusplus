#include<iostream>
using namespace std;
class Teacher{
private:
	double salary;
public:
	string name;
	string dept;
	string sub;


	Teacher(string name, string dept, string sub){
		this->name = name ;
		this->dept = dept;
		this->sub = sub;
	};

	void setsalary(double salary){
		this->salary =salary;
		return;
	}
	double getsalary(){
		return salary;
	}
	 void print(){
	 	cout<<name<<" "<<dept<<" "<<sub<<endl;
	 	return;
	 }

	 Teacher ( const Teacher &orgobj){
	 	cout<<"i am custom copy constructor "<<endl;
	 	this->name = orgobj.name;
	 	this-> dept = orgobj.dept;
	 	this->sub = orgobj.sub;
	 	this->salary = orgobj.salary;
	 }

};
int main(){
	Teacher t1("Ayush","cs","oops");
	t1.setsalary(90000);
	t1.print();

	Teacher t2(t1);// coustom copy constructor
	cout<<t1.getsalary()<<endl;
		t2.print();
	cout<<t2.getsalary()<<endl;
	return 0;
}