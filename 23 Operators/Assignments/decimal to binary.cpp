#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    int k;
    int temp=n;
    int count=0;
    int bi=0;
    //deci=deci+(k*(pow(2,count)));
    while(temp>0){
        k=temp%2;
        temp=temp/2;
        bi=bi+(k*(pow(10,count)));
        count++;
    }
    cout<<bi;
}