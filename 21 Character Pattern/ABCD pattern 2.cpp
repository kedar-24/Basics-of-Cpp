#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char k='A'+i-1;
            char t= k+j-1;
            //char k='A'+j+i-2;
            cout<<t;
            j++;
        }
    cout<<endl;
    i++;
    }
}