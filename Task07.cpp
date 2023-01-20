#include<iostream>
using namespace std;

void withoutRemainder(int number);
int main()
{
int number;
cout<<"Enter how many numbers you want to enter :";
cin>>number;

withoutRemainder(number);


}
void withoutRemainder(int number)
{   
    float p1;
    float p2;
    float p3;
    float c1=0;
    float c2=0;
    float c3=0;

    for(int count=1 ; count<=number ; count++)
    {
        int num;
        cin>>num;

        if(num%2==0)
        {
            c1=c1+1;
        }
        if(num%3==0)
        {
            c2=c2+1;
        }
        if(num%4==0)
        {
            c3=c3+1;
        }
    }

    p1=(c1/number)*100;
    p2=(c2/number)*100;
    p3=(c3/number)*100;

    cout<<p1<<"%"<<endl;
    cout<<p2<<"%"<<endl;
    cout<<p3<<"%";
}