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
