#include <iostream>
using namespace std;
int main(){
    int t;
    cout<<"No of test cases : ";
    cin>>t;
    int k;
    for(k=0;k<t;k++){
        int an;
        cout<<"no of elements in array : ";
        cin>>an;
        int a[100];
        cout<<"Enter elements of array : ";
        for(int i=0;i<an;i++){
            cin>>a[i];
        }
        int x;
        cout<<"sum shoud be : ";
        cin>>x;
        int count = 0;
        for(int i=0;i<an;i++){
            for(int j=i+1;j<an;j++){
                for(int k=j+1;k<an;k++){
                    if (a[i]+a[j]+a[k]==x){
                        count++;
                    }
                } 
            }
        }
        cout<<"Number of sum pairs : "<<count<<endl<<endl;
    }
}