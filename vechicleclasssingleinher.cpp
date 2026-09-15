#include<iostream>
using namespace std;
class  Vehicle{ //parent class
  int topspedd;
  float milegae;
  string fuel;
};
class car : public Vehicle{
  public:
  bool sunroof;
};
class Bike : public Vehicle{
  public:
};
class truck : public Vehicle{
  public:
};
int main (){
  Bike b1;

}