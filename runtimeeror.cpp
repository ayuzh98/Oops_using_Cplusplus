#include <iostream>
#include <string>
using namespace std;

class Customer {
public:
    string name;
    int balance, account_number;

    Customer(string name, int balance, int account_number) {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    // Deposit
    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
            cout << amount << " is deposited successfully" << endl;
        }
        else {
        	throw runtime_error("amount should be greater than 0 \n");
        }
    }

    // Withdraw
    void withdraw(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << amount << " is debited successfully" << endl;
        }

        else if(amount<0) {

        	throw runtime_error("amount should be greater than 0 \n");
        }
        else {
           throw runtime_error ("Insufficient balance \n") ;
        }
    }
}; 

// An exception in C++ can be thrown using the throw keyword.
// When a program encounters a throw statement, it immediately
// terminates the current function and starts finding a matching
// catch block to handle the thrown exception.
int main() {

    Customer c1("Ayush", 5000, 10);
  	 try {
        c1.deposit(100);
        c1.withdraw(50000);
        c1.deposit(100);
    }
    catch (const runtime_error &e){
    	cout <<"Exception Occured : "<< e.what() <<endl;
    }
    catch(...){
        cout<<"Exception Occured"<<endl;

    }
    return 0;
}
// try block contains the code that may generate an exception.

// catch block handles the exception thrown by the try block.

// throw keyword is used to generate an exception.

// When an exception is thrown, control immediately leaves the
// try block and moves to the matching catch block.