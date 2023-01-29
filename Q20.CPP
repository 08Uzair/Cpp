#include <iostream>
using namespace std;
int main(){
int a []={12,35,89,54};
int*p=a;
cout<<*(p++)<<endl;
cout<<*(++p)<<endl;
cout<<"The value of *p   is "<<*p<<endl;
cout<<"The value of *p+1 is "<<*(p+1)<<endl;
cout<<"The value of *p+2 is "<<*(p+2)<<endl;
cout<<"The value of *p+3 is "<<*(p+3)<<endl;



return 0 ;
}