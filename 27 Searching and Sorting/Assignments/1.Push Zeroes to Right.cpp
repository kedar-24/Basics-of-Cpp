#include <iostream>
using namespace std;
void PushZ(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            if (a[i]==0 && a[j]==1){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void PrintA(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int an;
    cout<<"Enter no of elements in array : ";
    cin>>an;
    int a[an];
    cout<<"Enter elements in array : ";
    for(int i=0;i<an;i++){
        cin>>a[i];
    }
    PushZ(a,an);
    PrintA(a,an);f
}