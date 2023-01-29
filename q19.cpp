// Write a program to find the power of  :
#include <iostream>
using namespace std;
double power(double a ,double b)
{
    double result=a;
    for (int i = 1; i < b; i++)
    {
        result*=a;
        return result;
    }
}
int main(){
double a,b;
cout<<"Entre the Value of base : ";
cin>>a;
cout<<"Enter the value of Power : ";
cin>>b;
cout<<power(a,b)<<endl;
}
