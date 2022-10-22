#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter total number of elements ";
    cin>>n;
    int Max=INT_MIN,M2=INT_MIN;
    int num;
    int count = 1;
    while(count<=n){
        cin>>num;
        if(num>Max){
            M2=Max;
            Max=num;
        }else if(num>M2&&num!=Max){
            M2=num;
        }
        count++;
    }
    cout<<M2<<endl;

}
