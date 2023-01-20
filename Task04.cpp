#include<iostream>
using namespace std;

void amplify(int number);
int main()
{
int number;
cout<<"Enter a number :";
cin>>number;

amplify( number);

}
void amplify(int number)
{
    for(int x=1 ; x<=number ; x++)
    {
        if(x%4!=0)
        cout<<x<<",";
        else
        cout<<x*10<<",";
    }

}