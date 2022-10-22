#include <iostream>
using namespace std;

int main(){
    int i=2;
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;

    bool b=false;
    while(i<n){
        if(n%i==0){
            b=true;
        }
        i=i+1;
    }
    if(!b){
        cout<<n<<" is Prime"<<endl;
    }else{
        cout<<n<<" is not Prime"<<endl;
    }
}