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
    

    if(rows%2!=0)
    rows=rows+1;
    if(rows%2==0)
    rows=rows+2;
    
    rows=rows/2;

for(int x=1; x<=rows ; x++)
   {     
    for(int y=rows-x ; y>0 ; y--)
         {
            cout<<" ";
         }
    for(int z=1 ; z<=x ; z++)
         {
             cout<<"*";
         }
         cout<<endl;
   } 
    for(int x=rows; x>0 ; x--)
    {     
    for(int y=rows-x ; y>0 ; y--)
         {
            cout<<" ";
         }
    for(int z=x ; z>0 ; z--)
         {
             cout<<"*";
         }
         cout<<endl;
    }
}