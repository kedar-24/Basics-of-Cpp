#include <iostream>
using namespace std;
int multi(int a,int b){
    return a*b;
}
int main(){
    int a,b;
    cout<<"enter numbers a & b:"<<endl;
    cin>>a>>b;
    int ans=multi(a,b);
    cout<<ans<<endl;
}