#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter a and b"<<endl;          //nested if else
    cin>>a>>b;

    if (a==b){
        cout<<"They are equal"<<endl;
    }else{
        if(a>b){
            cout<<a<<" is greater"<<endl;
        }else{
            cout<<b<<" is greater"<<endl;
        }
    }

}