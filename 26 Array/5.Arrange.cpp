#include <iostream>
using namespace std;
void PrintArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int k;
    int even;
    if(n%2==0){
        k=(n-1)/2;
        even=n;
    }else{
        k=n/2;
        even=n-1;
    }
    int val=1;
    int A[100];
    for(int i=0;i<=k;i++,val=val+2){
        A[i]=val;
    }
    for(int i=k+1;i<n;i++,even=even-2){
        A[i]=even;
    }
    PrintArray(A,n);
}