#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(0<=n&&n<=50){
        int i=1;
        while (i<=n) {
            int j=1;
            while (j<=i) {
                cout<<"*";
                j++;
            }
            cout<<endl;
            i++;
        }
    }else{
        cout<<"ERROR 404: Limit Exceeded";
    }
}