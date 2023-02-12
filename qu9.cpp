// 8. Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;

int main()
// x=10, y=30;
{
     int x,y;
     cout<<"Enter the two number: ";
     cin>>x>>y;
     x=x+y;
     y=x-y;
     x=x-y;
     cout<<"After swapping the value of x= "<<x <<" and y=" <<y;
     

}