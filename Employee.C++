//Showing Employee's information

#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

class Employee
{
  int emp_code, emp_age, emp_basic_salary, ta, da, hra;         // ta, da, and hra are travel, domestic and house rent allowances resp.
  int GrossSalary;
  char emp_name[20], emp_designation[20];

public:
  void Getempdata();
  int NetsalaryCalc(int);
  void Display();
};

void Employee::Getempdata()
{
  cout << "Enter Employee Details:" << endl;
  cout << "Name:" << endl;
  gets(emp_name);
  cout << "Designation:" << endl;
  gets(emp_designation);
  cout << "Age:" << endl;
  cin >> emp_age;
  cout << "Employee Code:" << endl;
  cin >> emp_code;
  cout << "Employee Basic Salary:" << endl;
  cin>>emp_basic_salary;                     
  cout << "Enter TA:" << endl;
  cin >> ta;
  cout<<"Enter DA:"<<endl;
  cin >> da;
  cout<<"Enter HRA:"<<endl;
  cin >> hra;

}

int Employee::NetsalaryCalc(int GrossSalary)
{
  //Formula used---->  Basic Salary= Gross Pay - Total Allowances    here Basic Salary is referring to left salary with employee (only in the commment)
  GrossSalary=emp_basic_salary+(ta+da+hra);
  return (emp_basic_salary+(ta+da+hra));

}

void Employee::Display()
{

    cout << "Show Employee Details:" << endl;
    cout << "Name:" <<emp_name<<endl;
    cout << "Designation:" <<emp_designation<<endl;

    cout << "Age:" <<emp_age<<endl;

    cout << "Employee Code:" <<emp_code<<endl;

    cout << "Employee Basic Salary:" <<emp_basic_salary<<endl;

    cout << "TA:"<<ta<<endl<<"DA:"<<da<<endl<<"HRA:"<<hra<<endl;
     cout<<"Gross Salary of employee is: \n"<<NetsalaryCalc(GrossSalary);
   }

int main()
{
  Employee emp; // creating object of class Employee
  emp.Getempdata();
  emp.Display();
  return 0;
}
