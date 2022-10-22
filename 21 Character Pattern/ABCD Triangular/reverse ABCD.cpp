#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(0<=n&&n<=26){
        int i=1;
        while(i<=n){
            int j=1;
            char k='A'+n-1;
            while(j<=i){
                char t= k-i+1;
                cout<<t;
                j++;
                k++;
            }
            cout<<endl;
            i++;
        }
    }

}