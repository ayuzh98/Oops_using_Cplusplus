#include<iostream>
using namespace std;

class Add {
public:

    // 1. Two integers
    int sum(int a, int b){
        return a + b;
    }

    // 2. Three integers
    int sum(int a, int b, int c){
        return a + b + c;
    }

    // 3. Two float numbers
    float sum(float a, float b){
        return a + b;
    }
};

int main(){
    Add obj;

    cout << obj.sum(2,3) << endl;        // calls 1st
    cout << obj.sum(2,3,4) << endl;      // calls 2nd
    cout << obj.sum(2.5f,3.5f) << endl;  // calls 3rd
}