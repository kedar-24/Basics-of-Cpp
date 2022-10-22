#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    bool div=false;
    for(int i=2;i<n;i++){
        if(n%i==0){
            div=true;
        }
    }
    if (div){
        cout<<"Not prime"<<endl;
    }else{
        cout<<"Prime"<<endl;
    }
}