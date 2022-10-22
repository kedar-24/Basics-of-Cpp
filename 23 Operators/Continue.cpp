#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    int i=1;
    while (i<n){
        if (i==7){
            i++;
            continue;
        }
        cout<<i<<endl;
        i++;
    }

    for(int j=1;j<n;j++){
        if(j==7){
            continue;
        }
        cout<<j<<endl;
    }
}