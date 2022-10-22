#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter no of rows to be printed";
    cin>>n;

    int i=1;
    
    while (i<=n){
        int t=1;
    while (t<=n-i){
        cout<<" ";
        t=t+1;
    }
        int j=1;
        int v=i;
        while (j<=i){
            cout<<v;
            j=j+1;
            v=v+1;
        }
    cout<<endl;
    i=i+1;
    }
}