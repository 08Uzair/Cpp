#include <bits/stdc++.h>
using namespace std;
int main(){
// # IF-ELSE & CONTROL STRUCTURE
// Types of control Structure in C++
// 1. Sequence Sturcture ==> it is if-else condition
// 2. Selection Structure ==> it is  if-elif-else condition
// 3. Loop Structure ==>It is a loop
// This all are the Basic Loop Structure

// a) if-else Statement
// int i=0;
// if(i>3){
//     cout<<"The value of i is greater than 3";
// }
// else{
//     cout<<"The value of i is less than 3";
// }


int age;
cout<<"Enter Your Age : \n";
cin>>age;
if (age<=0){
    cout<<"Age cannot be zero or negative";
}
else if(age<18){
    cout<<"You can't come to the Party";
}
else if (age==18){
    cout<<"You can Enter the party but you will get the kid Pass";
}
else{
    cout << "You are Welcome to our Party";
}

    return 0;
}
