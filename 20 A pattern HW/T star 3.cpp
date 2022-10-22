#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(0<=n&&n<=50){
        int i=1;
        while (i<=n){
            int j=1;
            int v=i;
            while (j<=i){
                cout<<v;
                j++;
                v--;
            }
        cout<<endl;
        i++;
        }
    }
}
