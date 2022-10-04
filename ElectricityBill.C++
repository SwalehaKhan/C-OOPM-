#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class Bill
{
    char name[20];
    int units;
    float charge, scharge;


    public:
    void Input();
    void Calc_charge();
    void Display();

};

void Bill::Input()
{
    cout<<"Getting User's Information:"<<endl;
    cout<<"Enter your name:"<<endl;
    gets(name);
    cout<<"Enter units used (in kilo joule kJ):"<<endl;
    cin>>units;


}

void Bill::Calc_charge()
{
  if(units<=100)
  {
      charge= .6 * units;
  }
  else if(units<=200)
  {
    charge= .8 * units;
  }

  else
  {
        charge= .92 * units;
  }

  if(charge<50)
  {
      charge=50;
  }
  else
  {
      scharge=charge + .15;
      charge=scharge + charge;
  }

}

void Bill::Display()
{
    cout<<"Displaying User's Bill:"<<endl;
  cout<<"Name:"<<name<<endl;
  cout<<"Number of units consumed:"<<units<<endl;
  cout<<"Charge generated:"<<charge;

}
int main()
{
  int i, n;


  cout<<"How many users:";
  cin>>n;
  Bill b[10];
    for(i=0; i<n; i++)
    {
    b[i].Input();



    b[i].Calc_charge();
  }

  for(i=0; i<n; i++)
  {
    b[i].Display();
}
    return 0;
}
