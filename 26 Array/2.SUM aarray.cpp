#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int Array[100000];
    int sum=0;
    if(1<n&&n<100000){
        for(int i=0;i<n;i++){
            cin>>Array[i];
        }
        for(int i=0;i<n;i++){
            sum=sum+Array[i];
        }
        cout<<sum<<" : is the sum of all elements."<<endl;
    }else{
        cout<<"Error : Limit Exceeded";
    }
}