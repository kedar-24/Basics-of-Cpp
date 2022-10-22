#include <iostream>
using namespace std;
int main(){
    int n,c=1;
    cout<<"enter n ";
    cin>>n;
    for(int i=1;c<=n;i++){
        if((3*i+2)%4==0){
        }else{
            cout<<(3*i+2)<<" ";
            c++;
        }
    }
}