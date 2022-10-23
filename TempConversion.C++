//A program to convert temperature in Degrees Fahrenheit to Degrees Celsius

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
  float F, C;
  cout<<"Enter temperature in Degrees Fahrenheit:"<<endl;
  cin>>F;
  C=(F-32)*5/9;
  cout<<"The given temperature in Degrees Celsius is: "<<C<<endl;
  return 0;
}
