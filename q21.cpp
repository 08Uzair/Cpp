#include <iostream>
using namespace std;
typedef struct employee
{
    /* data */
    int ID;
    char favChar;
    float salary;
}ep;

int main(){
ep uzer;
uzer.ID=4785;
uzer.favChar='F';
uzer.salary=150000000;
cout<<"The value is "<<uzer.ID <<endl    ;
cout<<"The value is "<<uzer.favChar <<endl   ;
cout<<"The value is "<<uzer.salary <<endl    ;
return 0 ;
}