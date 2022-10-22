#include <iostream>
using namespace std;
void BubbleS(int a[],int n){
    int j;
    for(j=0;j<n-1;j++){
        for(int i=0;i<n-j-1;i++){
            if (a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter no of elements in array : ";
    cin>>n;
    int b[n];
    cout<<"Enter elements in array : ";
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    BubbleS(b,n);
    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }

}