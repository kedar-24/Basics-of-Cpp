#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter no of rows to be printed";
    cin>>n;

    if(0<n&&n<=50){

        int i=1;
        while (i<=n){
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
    else{
        cout<<"ERROR 404: 'LIMIT EXCEEDED'"<<endl;
    }

}