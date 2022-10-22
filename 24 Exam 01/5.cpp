#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            int v=1;
            while(v<i){
                cout<<'*';
                v++;
            }
            j++;
        }
        int t=1;
        while(t<=n){
            cout<<(n-t+1);
            t++;
        }
        cout<<endl;
        i++;

    }
}