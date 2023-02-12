//A program to find larger number of two given numbers in two different classes using friend function

#include<iostream>
using namespace std;

class B;                       //forward declaration
class A
{
  int num;
public:
  A(int n)
  {
    num=n;
  }
  friend void LargerNum(A a, B b);
};


class B
{
  int num;
public:
  B(int n)
  {
    num=n;
  }
  friend void LargerNum(A a, B b);
};

void LargerNum(A a, B b)
{
  if(a.num > b.num)
  {
    cout<<"Number of A is Larger!";
  }
  else
  {
    cout<<"Number of B is Larger!";
  }
}

int main()
{
  A a(87);
  B b(65);
  LargerNum(a,b);
  return 0;
}
