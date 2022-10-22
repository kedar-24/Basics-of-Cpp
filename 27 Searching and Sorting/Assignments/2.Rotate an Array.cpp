#include <iostream>
using namespace std;
/*void RotateA(int a[],int n,int r){
    int j=0;
    while(j<r){
        int temp=a[0];
        for(int i=0;i<n;i++){
            a[i]=a[i+1];
        }
        a[n-1]=temp;
        j++;
    }
}*/
/*void RotateA(int a[],int n,int r){
    int c[r];
    for(int i=0;i<r;i++){
        c[i]=a[i];
    }
    for(int i=0;i<n;i++){
        a[i]=a[i+r];
    }
    for(int i=n-r,j=0;i<n,j<r;i++,j++){
        a[i]=c[j];
    }
}*/
void Reverse(int a[],int n){
    for(int i=0,j=n-1;i<n&&j>i;i++,j--){
        int temp=a[j];
        a[j]=a[i];
        a[i]=temp;
    }
}
void RotateA(int a[],int n,int r){
    Reverse(a,n);
    Reverse(a,n-r);
    for(int i=n-r,j=n-1;i<n&&j>i;i++,j--){
        int temp=a[j];
        a[j]=a[i];
        a[i]=temp;
    }
}
void printA(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int k,n;
    cout<<"Enter no of elements in array : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the no of places by which arrayy must be rotated : ";
    cin>>k;
    RotateA(a,n,k);
    printA(a,n);
}