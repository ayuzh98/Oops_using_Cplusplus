
//shallow copy
#include<iostream>
using namespace std;
 

 class Student{

 public:
 	string name;
 	double* cgpaptr;

 	Student(string name, double cgpa){
 		this->name = name;
 		cgpaptr = new double;//address
 		*cgpaptr = cgpa;
 	}

 	void getifro(){
 		cout<<"name : "<<"  "<<this->name<<endl;
 		cout<<"cgpa : "<<"  "<<*cgpaptr<<endl;
 	}

 };


int main(){

		Student s1("Ayush",8.9);

		Student s2(s1);
		s1.getifro();

		// *(s2).cgpaptr = 9.8;
		*(s2.cgpaptr) = 9.8;
		s1.getifro();


	return 0;
}