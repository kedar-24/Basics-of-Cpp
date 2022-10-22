#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number ";
    cin>>n;
    bool d=false;
    int i=2;
    while(i<n){
        if(n%i==0){
            d=true;
            break;
        }
    i++;
    }
    if (d){
        cout<<"Not prime";
    }else{
        cout<<"Prime";
    }
}