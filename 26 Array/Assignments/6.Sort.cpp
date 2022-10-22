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
    cout<<"Enter no of elements of array : ";
    cin>>n;
    cout<<"Enter elements of array : ";
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
    for(int i=0;i<n;i++){
        for(int j=n;i<j;j--){
            if(a[i]!=0&&a[j]==0){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printArray(a,n);
    
}