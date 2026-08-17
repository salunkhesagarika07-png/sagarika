#include<iostream>
using namespace std;
   class Factorial 
   {
    int numerator, denominator;
public:
    void getdata()
    {
        cout<<"Enter numerator : ";
        cin>> numerator;
        cout<<"Enter denominator: ";
        cin>> denominator;
    }
    
    int fact(int n)
    {
        int f= 1;
        for(int i =1; i<=n;i++)
        {
            f=f * i;
        }
        return f;
    }
    void display()
    {
        cout<<"Factorial of numerator = " << fact(numerator) << endl;
        cout<<"Factorial of denominator =" << fact(denominator)<<endl;
    }
   };
   int main()
   {
    Factorial f;
    f.getdata();
    f.display();
    return 0;
   }