#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int Array[100000];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>Array[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+Array[i];
    }
    cout<<sum<<" : is the sum of all elements."<<endl;
}