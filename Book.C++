#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class Book
{
    char Book_title[20];
    int Book_no, Price;
    int n;

    public:
    void Input();
    int Total_cost(int n);
    void Purchase();

};

void Book::Input()
{
    cout<<"Getting Reader's Information:"<<endl;
    cout<<"Enter the title of Book:"<<endl;
    gets(Book_title);
    cout<<"Enter the number of Book:"<<endl;
    cin>>Book_no;
    cout<<"Enter the price of Book:"<<endl;
    cin>>Price;

}

int Book::Total_cost(int n)
{
  int total;
    total=Price * n;
    return total;
}

void Book::Purchase()
{
    cout<<"Enter the number of copies of  the book to be purchased:"<<endl;
    cin>>n;
    int totalcost=Total_cost(n);
    cout<<"The total cost of the books purchased is:"<<totalcost;
}
int main()
{
    Book b;
    b.Input();
    b.Purchase();

    return 0;
}
