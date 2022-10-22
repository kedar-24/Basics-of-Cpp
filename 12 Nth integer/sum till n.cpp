#include <iostream>
using namespace std;

int main(){
    int i=1;
    int s=0;
    int n;
    cout<<"enter integer"<<endl;
    cin>>n;
    while(i<=n){
        s+=i; //s=s+1;
        i+=1; //i=i+1;
    }
    cout<<s<<" is the sum of all natural numbers till "<<n<<endl;

}