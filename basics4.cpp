#include<iostream>

using namespace std;
 
 class Teacher
 {
 	private :
 	double  salary;

 	public:
 	string name;
 	string dept;
 	//methods/ member functions
 	void print(){
 		cout<<name<<" "<<dept<<endl;
 	};

 //methods/ member functions
 	void changeDept(string newDept){
 		dept = newDept;
 	};
 	 //setter
 	void setsalary(double s){
 		salary = s;
 	};
 	//getter
 	double getsalary(){
 		return salary;
 	};

 };
int main(){

	Teacher t1;
	t1.name ="ayush";
	t1.dept = "cs";
	t1.setsalary (90000);
	t1.changeDept("cs in iitb");

 	t1.print();

	cout<<t1.getsalary()<<endl;
	return 0;
}