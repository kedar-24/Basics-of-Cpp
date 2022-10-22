#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;

    int i=1;
    while (i<=n){
        int j=1;
        while (j<=n){
            cout<<"*";
            j++;
        }
        i+=1;
        cout<<endl;
    }
}