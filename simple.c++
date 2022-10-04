#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;


class A {
private:
  int x=10;
  char y[10]={"Merhaba!"};

public:
void print();
};

void A::print()
{
  cout<<x<<endl;
  cout<<y<<endl;
}

int main()
{
  A ob;
  ob.print();
  return 0;
}
