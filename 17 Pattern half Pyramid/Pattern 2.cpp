#include <iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;

    int v=1;
    while (i<=n)
    {   
        int k=1;
        while(k<=n-i)
        {
            cout<<" ";
            k=k+1;
        }
        int j=1;
        while(j<=i)
        {
            cout<<v;
            j=j+1;
            v=v+1;
        }
        cout<<endl;
        i=i+1;
        
    }
       
}