#include <bits/stdc++.h>
using namespace std;
int main(){
// What are the Pointers in C++ ?
/*
It is a Datatype  which holds the  address of the other data types
*/
int a=3;
int* b=&a;
// & ---->(Address of) ----> operator
// cout<<b<<endl;//--->Address of Operator
// cout << &a;   //--->Address of Operator


// * ---->Dereference operator
cout << *b; //--->Value at Operator

// Pointer to Pointer
int** c=&b;
cout<<&b;
return 0 ;
}