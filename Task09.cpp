#include<iostream>
using namespace std;

void asterik(int rows);

int main()
{
    int rows;
    cout<<"Enter rows:";
    cin>>rows;
    
    asterik(rows);  
} 
void asterik(int rows)
{
    int valu=rows*2-2;
    
    for(int l1 = 1; l1 <= rows; l1++)
        {
         for(int l11 = 1 ; l11 <=l1 ; l11++)
           {
            cout<<'*';
           }
         for(int l12 = 1 ; l12 <= valu ; l12++)
           {
            cout<<" ";
           }
         for(int l13 = 1 ; l13 <= l1 ; l13++)
           {
            cout<<'*';
           }
         cout<<endl;
         valu = valu-2;    
        }
     

}     