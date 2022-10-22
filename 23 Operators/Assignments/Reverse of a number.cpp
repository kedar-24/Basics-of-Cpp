#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
   int k;
   int temp=n;
   int rev=0;
   while(temp>0){
    k=temp%10;
    temp=temp/10;
    rev=rev*10+k;
   }
    cout<<rev;

}