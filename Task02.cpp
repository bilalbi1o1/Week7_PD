#include<iostream>
using namespace std;

void asterisk(int rows);
int main()
{
    int rows;
    cout<<"Enter number of rows :";
    cin>>rows;

    asterisk(rows);
}
void asterisk(int rows)
{
   for(int x=rows ; x>0 ; x--)
   {
        for(int y=1 ; y<=x ; y++)
        {
            cout<<"*";
        }
        cout<<endl;
   } 

}