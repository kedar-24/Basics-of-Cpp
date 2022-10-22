#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (0<=n&&n<=50){
        int i=1;
        while(i<=n){
            int s=1;
            while(s<=n-i){
                cout<<" ";
                s++;
            }
            int j=1;
            while(j<=i){
                cout<<"*";
                j++;
            }
            int t=i-1;
            while(t>=1){
                cout<<"*";
                t--;
            }

        cout<<endl;
        i++;
        }
    }
}

