#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int l=(n+1)/2;
    while(i<=n){
        if (i<=l){
            int space= 1;
            while(space<=l-i){
                cout<<" ";
                space++;
            }
            int j=1;
            while (j<=2*i-1){
                cout<<"*";
                j++;
            }
        }
        else{
            int p=i-l;
            int t=1;
            while(t<=p){
                cout<<" ";
                t++;
            }
            int x=n;
            while(x>2*p){
                cout<<"*";
                x--;
            }
        }
        cout<<endl;
        i++;
    }

}