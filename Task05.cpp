#include<iostream>
using namespace std;

int triangle(int number);
int main()
{
int number;
int dots;
cout<<"Enter triangle number :";
cin>>number;

dots = triangle( number);
cout<<"Number of dots are :"<<dots;
}
int triangle(int number)
{
    int dots=0;
    for(int x=number ; x>0 ; x--)
    {
        dots=dots+x;
    }
    return dots;
}