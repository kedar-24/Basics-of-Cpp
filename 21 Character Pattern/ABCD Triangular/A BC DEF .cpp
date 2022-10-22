#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(0<=n&&n<=13){
        int i=1;
        while(i<=n){
            int j=1;
            char k='A'+i-1;
            while(j<=i){
                cout<<k;
                j++;
                k++;
            }
            cout<<endl;
            i++;
        }
    }

}