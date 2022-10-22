#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char k='A'+j-1;
            cout<<k;
            j++;
        
        /*char k='A';
        while (j<=n){
            cout<<k;                    #My Code
            j++;
            k++;*/
        }
    cout<<endl;
    i++;
    }
}