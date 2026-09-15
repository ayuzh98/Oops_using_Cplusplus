#include<iostream>
using namespace std;
class  Vehicle{ //parent class
  int topspedd;
  float milegae;
  string fuel;
};
class Twowheeler:public Vehicle{
  public:
  
};
class Fourwheeler : public Vehicle{
  public:
  
};
class Bike : public Twowheeler{
  public:
};
class truck : public Vehicle{
  public:
};
int main (){
  Bike b1;

}