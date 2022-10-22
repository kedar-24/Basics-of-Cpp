#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (0<=n&&n<=50){
        int i=1;
        int l=2*n-1;
        while(i<=l){
            if (i<=n){
                int s=1;
                while(s<=n-i){
                    cout<<" ";
                    s++;
                }
                int j=1;
                while(j<=2*i-1){
                    cout<<"*";
                    j++;
                }
                /*int t=i-1;
                while(t>=1){
                    cout<<"*";
                    t--;
                }*/
            }else{
                int k=n;
                while (k<i){
                    cout<<" ";
                    k++;
                    }
                int j=1;
                while (j <= l+1){
                    cout<<"*";
                    j++;
                    }
                /*int p=i-1;
                int o=n/2;
                while (p>=o){
                    cout<<"*";
                    p--;
                }*/
                }

        cout<<endl;
        i++;
        }
    }
}

