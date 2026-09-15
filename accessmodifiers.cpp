#include<iostream>
#include<string>
using namespace std;

class Student{
private:
	float marks;
public: 
	string name;
	int rno;
	Student(string n,int r,float m){
		name = n;
		rno = r;
		marks = m;
	}
	 void setmarks(float setmarks){

	 	marks = setmarks;
	 };
	 int getmarks(){
	 	return marks;
	 };
};

int main(){

	Student s1("ayush",99,99.2);
	s1.setmarks(100.1);
	cout<<"marks vaule : "<<s1.getmarks()<<endl;


	return 0;
}