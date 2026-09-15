#include <iostream>
#include <string>
using namespace std;
 // class Teacher
 // {
 // 	private :
 // 	double  salary;

 // 	public:
 // 	string name;
 // 	string dept;
 // 	//methods/ member functions
 // 	void print(){
 // 		cout<<name<<" "<<dept<<endl;
 // 	};

 // //methods/ member functions
 // 	void changeDept(string newDept){
 // 		dept = newDept;
 // 	};
 // 	 //setter
 // 	void setsalary(double s){
 // 		salary = s;
 // 	};
 // 	//getter
 // 	double getsalary(){
 // 		return salary;
 // 	};

 // };
class Account{
private:
	double balance ;
	string password;
public:
	string accountID;
	string username;

	Account(string accountID , string username )
	{
		this->accountID = accountID;
		this->username = username;
	};
	 //member function
	// void print(){
	// 	cout<<accountID<<" "<<username<<endl;
	// };
	//setter
	void setinfromation(double balance,string password){
		this->balance =  balance;
		this->password = password;
	};
	//getter
	double getbalance(){
		return balance;
	};
	string getusername(){
		return username;
	};

};
void print (Account a){
	cout<<a.accountID<<" "<<a.username<<endl;};

	int main(){

	Account a1("ayush99","ayuser");
	print(a1);
	a1.setinfromation(250000,"zack");
	cout<<a1.getbalance()<<" "<<a1.getusername()<<endl;

	// Teacher t1;
	// t1.name ="ayush";
	// t1.dept = "cs";
	// t1.setsalary (90000);
	// t1.changeDept("cs in iitb");

 	// t1.print();

	// cout<<t1.getsalary()<<endl;
	return 0;
}