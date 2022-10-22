#include <iostream>
using namespace std;
void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[100],n;
    cout<<"Enter no of elements in array : ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    printArray(a,n);

    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<n;j++){
            if(a[i]==a[j]&&i!=j){
                cout<<a[i]<<" ";
                break;
            }else if(a[i]==a[j]&&i==j){
                break;
            }

        }
    }
}