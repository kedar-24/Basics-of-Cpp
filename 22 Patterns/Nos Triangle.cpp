#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n){
        int s=1;
        while(s<=n-i){
            cout<<" ";
            s++;
        }
        int j=1;
        int v=i;
        while(j<=i){
            //cout<<j;
            cout<<v;
            j++;
            v++;
        }
        int t=2*(i-1);
        while (t>=i){
            cout<<t;
            t--;
        }
        i++;
        cout<<endl;
    }

}