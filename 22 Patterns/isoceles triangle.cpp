#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int k=1;
        while (k<=(n-i)){
            cout<<" ";
            k++;
        }
        int j=1;
        while (j<=i){
            
            cout<<j;
            j++;
        }
        int t=i-1;
        while(t>=1){
            cout<<t;
            t--;
        }
        i++;
        cout<<endl;
    }
}