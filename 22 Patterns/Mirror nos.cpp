#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(0<=n&&n<=50){

        int i=1;
        while(i<=n){
            int v=1;
            while (v<=(n-i)){
                cout<<" ";
                v++;
            }
            int j=1;
            while(j<=i){
                cout<<j;
                j++;

            }
            cout<<endl;
            i++;
        }
    }else{
        cout<<"limit Exceeded";
    }
}