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
    int deci=0;
    //deci=deci+(k*(pow(2,count)));
    while(temp>0){
        k=temp%10;
        temp=temp/10;
        deci=deci+(k*(pow(2,count)));
        count++;
    }
    cout<<deci;



}