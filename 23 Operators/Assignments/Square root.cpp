#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    int k,i=1;
    while(k<=n){
        i++;
        k=i*i;
    }
    cout<<(i-1)<<endl;
    
}