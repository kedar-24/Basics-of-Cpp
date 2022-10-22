#include <iostream>
using namespace std;
int fact(int n){
    int i=1;
    int a=1;
    while(i<=n){
        a=a*i;
        i++;
    }
    return a;
}
int main(){
    int n,r;
    cout<<"enter n & r"<<endl;
    cin>>n>>r;

    int fn=fact(n);
    int fr=fact(r);
    int fn_r=fact(n-r);

    int ans=fn/(fr*fn_r);
    cout<<ans<<endl;
}