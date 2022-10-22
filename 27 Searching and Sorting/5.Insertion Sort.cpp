#include <iostream>
using namespace std;
void InsertionS(int a[],int n){
    for(int i=1;i<n;i++){
        int temp=a[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(temp<a[j]){
                a[j+1]=a[j];
            }else{
                break;
            }
        }
        a[j+1]=temp;
    }
}
int main(){
    int n;
    cout<<"Enter no of elements in array : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    InsertionS(a,n);
    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}