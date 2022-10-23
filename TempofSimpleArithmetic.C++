//A program to display value of x using class Temp

#include<iostream>
#include<conio.h>       
using namespace std;

class Temp            //class definition
{
  int a,b,c, x;         //data members
  //a=300, b=70, c=70;
  public:               //access specifier
  void Arithmetic();    //member function

};

void Temp::Arithmetic()   //member function definition
{
  cout<<"Enter the values of a, b and c:"<<endl;
  cin>>a>>b>>c;
  x=a/b-c;
  cout<<"x"<<"="<<"a/b"<<"-"<<"c is: "<<x<<endl;

}

int main()
{
   Temp t;              //creating object of the class
   t.Arithmetic();      //calling member function using object of its class
   return 0;
}
