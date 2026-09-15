#include<iostream>
using namespace std;

class parent {

public:
    void getinfo() {
        cout << "parent class" << endl;
    }
};

class Child : public parent {
public:
    void getinfo() {
        cout << "child class" << endl;
    }
};

int main() {
    Child c1;

    c1.getinfo();

    return 0;
}