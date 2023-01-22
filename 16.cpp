#include <bits/stdc++.h>
using namespace std;
int main(){
// Array in C++ --->These are Mutable  means you can change the value of the variable.
// cout<<marks[0]<<endl ;
// cout<<marks[1]<<endl ;
// cout<<marks[2]<<endl ;
// cout<<marks[3]<<endl ;
// for (int i = 0; i < 4; i++)
// {
//     cout<<"The value of "<<i<<" is "<<marks[i]<<endl;
// }

// int i =0;
// while (i<4)
// {
//      cout<<"The value of "<<i<<" is "<<marks[i]<<endl;
//      i=i+1;
// }
int marks[ ]={23,56,98,41};
int* p = marks;
cout<<(*p)<<endl;
cout<<*(p+1)<<endl;
cout<<*(p+2)<<endl;
cout<<*(p+3)<<endl;
return 0 ;
} 