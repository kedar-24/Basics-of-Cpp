#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    if(n==1||n==2){
        cout<<"1"<<endl;
    }
    else if(n>=3 && n<=25){
        for(int i=1,F1=1,F2=1,Fn;i<n;i++){
        if(i==n-1){
            cout<<Fn<<endl;
        }
        Fn=F1+F2;
        F1=F2;
        F2=Fn;
        }
    }else{
        cout<<"Error"<<endl;
    }
}