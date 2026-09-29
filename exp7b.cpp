#include<iostream>
using namespace std;
//base class 
class vehicle
{
    public:
    Vehicle(){cout<<"This is a Vehicle\n";}
};
//first subclass
class Car:public Vehicle{
    public:
    Car(){cout<<"This Vehicle is Car\n";}
};
//second subclass 
class Bus:public vehicle{
    public:
    Bus(){cout<<"This Vehicle is Bus\n";}

};
//main function
int main()
{
    //creating object of subclass will
    //invoke the construsctor of base class
    Car obj1;
    Bus obj2;
    return 0;
}