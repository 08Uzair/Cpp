#include<bits/stdc++.h>
using namespace std ;
int main(){
/*
Types of loop's in cpp
1. For loop
2. While loop
3. do-While loop
*/
// For loop in Cpp
/*
for(initialization;condition;updation)
{
      loop body(c++ code); 
}
*/
// for( int i=0; i<400;i++)
// {
//    cout<<i<<endl ; 
   
// } 
// Examle of Infinite loop
// for(int i=0;1<2;i++){
//     cout<<i<<endl;
// }


// While Loop in Cpp
// Syntax
/*
while(condition)
{
 Cpp Statement
}
*/
// Printing  1 to 40 using While loop::
// int i=1;
// while(10<40){
//     cout<<i<<endl; 
//     i++;
// }
// do while loop
/*
Syntax:
do{
C++ Statements;
}
while(condition)
Printing 1 to 40 Using While loop
*/
int i=1;
do{
    cout << i << endl;
    i++;
}while (i<= 40) ;
return 0;
}