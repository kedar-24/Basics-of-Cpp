#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;

    if(0<=n&&n<=50){

      int i=1;
      while(i<=n){
           int v=1;
           while(v<=n-i){
               cout<<" ";
               v=v+1;
            }
            int j=1;
            while(j<=((2*i)-1)){
                cout<<"*";
                j=j+1;

            }
        cout<<endl;
        i=i+1;
        } 
    }
    else{
        cout<<"ERROR 404: LIMIT EXCEEDED"<<endl;
    }
}