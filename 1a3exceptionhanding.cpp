 //std:bad_alloc

#include<iostream>
#include<exception>
using namespace std;

 int main(){

 	try{

 	int *p = new int[1000000000000];
 	cout<<"memoery allocation is successfully"<<endl;
 	delete []p;
 	}
 	catch (const bad_alloc &e){
 		cout<<"Exception Occured due to line 7: "<<e.what()<<endl;
 	}

 	return 0;
 }