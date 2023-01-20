#include<iostream>
#include<cmath>
using namespace std;

void cargo(int number);
int main()
{
int number;
cout<<"Enter how many cargoes you want to enter :";
cin>>number;

cargo(number);


}
void cargo(int number)
{   
    float avg=0;
    float sum=0;

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

        if(num<=3)
        {
            c1=c1+num;
        }
        if(num>3 && num<=11)
        {
            c2=c2+num;
        }
        if(num>11)
        {
            c3=c3+num;
        }
        sum=sum+num;
    }


    p1 = (c1/sum)*100;
    p2 = (c2/sum)*100;
    p3 = (c3/sum)*100;

    avg = ((c1*200)+(c2*175)+(c3*120))/sum;

    cout<<avg<<endl; 

    cout<<p1<<"%"<<endl;
    cout<<p2<<"%"<<endl;
    cout<<p3<<"%";
}