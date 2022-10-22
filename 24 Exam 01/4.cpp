#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n ";
    cin>>n;
    int i=1;
    while(i<=n){
        int t=1;
        while(t<=n-i){
            cout<<" ";
            t++;
        }
        int j=1;
        int v=i;
        while(j<=i){
            cout<<v;
            j++;
            v--;
        }
        int l=1;
        int k=2;
        while(l<i){
            cout<<k;
            l++;
            k++;
        }
        cout<<endl;
        i++;
    }
}