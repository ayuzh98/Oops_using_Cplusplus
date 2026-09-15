
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
 	}

 // custom copy constructor 
 	Student (Student &obj){

 		this->name = obj.name;

 		cgpaptr = new double; // created new address 


 		*cgpaptr = *obj.cgpaptr;
 		//*cgpaptr = *obj.cgpaptr;

// Right side:
// *obj.cgpaptr = value stored at the address pointed to by obj.cgpaptr
// Example: 8.5

// Left side:
// *cgpaptr = value stored at the address pointed to by cgpaptr

// Copy the value from obj's heap memory
// into this object's heap memory (deep copy)



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

		s2. name = "earth";
		s1.getifro();
		s2.getifro();


	return 0;
}