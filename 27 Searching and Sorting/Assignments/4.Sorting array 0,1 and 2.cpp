#include <iostream>
using namespace std;
int main(){
    int a[100],n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"enter elements of array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(a[i]!=0 && a[j]==0){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }else if(a[j]!=2 && a[i]!=0){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    cout<<"\n"<<"Sorted Array : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}