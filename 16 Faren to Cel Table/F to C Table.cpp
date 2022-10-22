#include <iostream>
using namespace std;

int main(){
    int S,E,W;
    cout<<"Enter starting value in Farenheit : ";                   //c=(5*(f-32))/9
    cin>>S;
    cout<<"Enter ending value in Farenheit : ";
    cin>>E;
    cout<<"Enter Step Size : ";
    cin>>W;

    bool v1=(0<=S&&S<=80);
    bool v2=(S<=E&&E<=900);
    bool v3=(0<=W&&W<=40);


   if(v1&&v2&&v3)
    {
        while (S<=E)
        {
            int c=(5.0/9)*(S-32);
            cout<<S<<"\t"<<c<<endl;
            S=S+W;
        }
    }
    else
    {
        cout<<"error constraint exceeded"<<endl;

    }
}