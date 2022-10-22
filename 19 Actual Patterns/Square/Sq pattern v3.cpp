#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (0<=n&&n<=50){
        int i=1;
        while(i<=n){
            int j=1;
            while (j<=n){
                cout<<n-j+1;
                j++;
            }
            /*int j=n;
            while (j>0){    #my code
                cout<<j;
                j--;
            }*/
            cout<<endl;
            i++;
        }
    }else{
        cout<<"ERROR 404: Limit Exceeded";
    }
   
}