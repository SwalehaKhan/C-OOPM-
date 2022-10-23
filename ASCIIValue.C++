//A program to take character input and display its corresponding ASCII Value on screen

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
  char a;

  cout<<"Enter a character:"<<endl;
  cin>>a;
  cout<<"The ASCII Value of "<<a<<" is: "<<int(a)<<endl;     //int()is used to convert char into ascii
  return 0;

}
