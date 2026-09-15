
//deep copy
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
  	};
  	void getifro(){
  		cout<<"name : "<<"  "<<name<<endl;
  		cout<<"cgpa : "<<"  "<<*cgpaptr<<endl;
  	};
  	//destror
  	~Student(){
  		cout<<"hi,i delete the everything"<<endl;
  		delete cgpaptr;//memory leak 
  	}
 
  };


int main(){

		Student s1("Ayush",8.9);

		s1.getifro();

	return 0;
}