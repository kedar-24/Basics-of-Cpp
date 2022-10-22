#include <iostream>
using namespace std;
void Print_1_to_N(int n){
    int i=1;
    while(i<=n){
        cout<<i<<" ";
        i++;
    }
}
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    Print_1_to_N(n);
}