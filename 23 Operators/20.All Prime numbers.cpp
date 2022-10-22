#include <iostream>
using namespace std;
bool isprime(int n){
    if (n<=1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }else{
            return true;
        }
    }
}

int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    for(int i=2;i<=n;i++){
        if (isprime(i))
            cout<<i<<endl;
    }

}