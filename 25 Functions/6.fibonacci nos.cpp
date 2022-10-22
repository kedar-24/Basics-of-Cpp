#include <iostream>
using namespace std;
bool Fib(int n){
    int f1=1;
    int f2=1;
    int fn=0;
    while(fn<=n){
        fn=f1+f2;
        f1=f2;
        f2=fn;
        if (fn==n){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    if (Fib(n)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
}