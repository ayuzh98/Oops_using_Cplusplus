#include <iostream>
using namespace std;
int main() {
    int balance = 5000;
    int amount;
    int account;
    cout << "Enter Account Number: ";
    cin >> account;
    cout << "Enter Amount: ";
    cin >> amount;
    try {
        if (account <= 0) {
            throw "Invalid account number";
       }
        if (amount > balance) {
            throw amount;
      }
        balance = balance - amount;
        cout << "Transaction Successful" << endl;
        cout << "Remaining Balance: " << balance << endl;
    }
    catch (const char* msg) {
      cout << "Exception: " << msg << endl;
    }
    catch (int x) {
       cout << "Exception: Insufficient Balance" << endl;
  }
  return 0;
}



#include<iostream>
using namespace std;
 class car
 {
 public:
   string name ;
   int rollno;
   float  fk;
 };
int main(){


  return 0;
}




#include<iostream>
using namespace std;

int output(int x , int y , int z, int g){
  int h;
      if (x>> y >> z >> g){
        h =x;
        cout<<x;
      };
     if ( y >> x>>z>>g ){
      h = y;
      cout<<y;
     };
     if (z >> x>>y>> g ){
      h = z ;
      cout<<z;
     };
     if( g >> x >> z >> y ){
      h = g;
      cout << g;
     };
      return h;
}

int main(){
    
int a,b,c,d;
cin>>a ;
cout << endl;
cin>>b;
cout << endl;
cin>>c;
cout << endl;
cin>>d;
cout << endl;

   output(a,b,c,d);
 cout << output;
  
}