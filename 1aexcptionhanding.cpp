#include<iostream>
using namespace std;


int main(){


	int a, b;
	 cin>> a>>b;

	 try{

	 	if(b==0)
	 		throw "DIVIDE BY 0 IS NOT POSSIBLE";
	 	int c = a/b;
	 	cout<<c<<endl;
	 }
	 catch(const char* e){

	 	cout<<"Exception Occuresed :"<<e<<endl;
	 }
	return 0;
}