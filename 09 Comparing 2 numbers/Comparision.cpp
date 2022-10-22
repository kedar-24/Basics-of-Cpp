#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter valuesof a and b"<<endl;
    cin>>a>>b;

    /*if(a==b){
        cout<<"They are equal"<<endl;                         if and else
    }else{
        cout<<"not equal"<<endl;
    }*/
    if(a==b){
        cout<<"They are equal"<<endl;
    }else if(a>b){
        cout<<a<<" is greater"<<endl;                       //if elseif else
    }else{
        cout<<b<<" is bigger"<<endl;
    }
    
}
