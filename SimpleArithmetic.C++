//A program to display value of x

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
  int a,b,c, x;
  //a=300, b=70, c=70;
  cout<<"Enter the values of a, b and c:"<<endl;
  cin>>a>>b>>c;
  x=a/b-c;
  cout<<"x"<<"="<<"a/b"<<"-"<<"c is: "<<x<<endl;

  return 0;
}
