#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class Student
{
    char name[20], branch[20];
    int enroll, age;
    int semester;

    public:
    void Getdata();
    void Putdata();

};

void Student::Getdata()
{
    cout<<"Getting Student's Information:"<<endl;
    cout<<"Enter the name of student:"<<endl;
    gets(name);
    cout<<"Enter the enrollment number of student:"<<endl;
    cin>>enroll;
    cout<<"Enter the branch of student:"<<endl;
    gets(branch);
    cout<<"Enter the semester of student:"<<endl;
    cin>>semester;
    cout<<"Enter the age of student:"<<endl;
    cin>>age;
}


void Student::Putdata()
{
      cout<<"Displaying Student's Information:"<<endl;
      cout<<"Name:"<<name;
      cout<<"Enrollment number:"<<enroll;
      cout<<"Branch:"<<branch;
      cout<<"Semester:"<<semester;
      cout<<"Age:"<<age;


}
int main()
{
  int i;
  Student s[2];
  for(i=0; i<2; i++)
  {
  s[i].Getdata();
}
  for(i=0; i<2; i++)
  {
  s[i].Putdata();
}
    return 0;
}
