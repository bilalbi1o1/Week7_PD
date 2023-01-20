#include<iostream>
using namespace std;

void patient(int period);
int main()
{
int period;
cout<<"Enter time period :";
cin>>period;

patient( period);


}
void patient(int period)
{   
    int untreatedPatients = 0 ;
    int treatedPatients = 0 ;
    int doctors = 7 ;

    for(int day=1 ; day<=period ; day++)
    {
        int currentPatients =0 ;
        cin>>currentPatients;

        if((day%3 == 0) && (untreatedPatients > treatedPatients) )
        {
            doctors++;
        }
        if (currentPatients > doctors)
        {
            treatedPatients = treatedPatients + doctors;
            untreatedPatients = untreatedPatients + currentPatients - doctors ;

        }
        else
        {
            treatedPatients = treatedPatients + currentPatients;
        }
    }

    cout<<"Treated Patients :"<<treatedPatients<<endl;
    cout<<"Untreated Patients :"<<untreatedPatients<<endl;
}