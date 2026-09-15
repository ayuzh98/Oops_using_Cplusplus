#include<iostream>
using namespace std;

class parent {

public:
    void getinfo() {
        cout << "parent class" << endl;
    }
    virtual void hello(){
        cout<<"hey hello"<<endl;
    }
};

class Child : public parent {
public:
    void getinfo() {
        cout << "child class" << endl;
    }
     void hello(){
        cout<<"hey hello child"<<endl;
    }
};

int main() {
    Child c1;

    c1.getinfo();

    c1.hello();

    return 0;
}