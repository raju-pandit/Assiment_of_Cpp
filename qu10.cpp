//  Write a C++ program to find the maximum of two numbers.

#include<iostream>
using namespace std;

int main()

{
     int x,y,max;
     cout<<"Enter the two number: ";
     cin>>x>>y;
     max= x>y ? x:y;
     cout<<"the maximum of two number is: "<<max<<endl;

}