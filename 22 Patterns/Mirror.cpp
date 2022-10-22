#include <iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;
    while(i<=n){
        int v=1;
        while (v<=(n-i)){
            cout<<" ";
            v++;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;

        }
        cout<<endl;
        i++;
    }
}