#include<iostream>
using namespace std;
  class Time 
  {
    int h,m,s;
    
public:
    void getdata()
    {
        cout<<"Enter hours: ";
        cin>> h;
        
        cout<<"Enter minutes: ";
        cin>> m;
        
        cout<<"Enter seconds: ";
        cin>> s;

    }
     void display()
     {
        cout<< h << " hours " << m << " minutes " << s << " seconds ";
     }
  };
  int main()
  {
    Time t;
    t.getdata();
    cout <<"Time is: ";
    t.display();
    return 0;
  }