#include <iostream>
using namespace std;

int main(){
    int i=1;
    int s=0;
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;

    while(i<=n){
        if (i%2==0){
            s=s+i;
            i=i+1;
        }else{
            i=i+1;
        }
    }
    cout<<s<<" is the sum of all even numbers between 1 and "<<n<<endl;
}