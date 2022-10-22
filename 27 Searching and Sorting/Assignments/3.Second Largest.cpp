#include <iostream>
using namespace std;
/*void BubbleS(int a[],int n){
    int j;
    for(j=0;j<n-1;j++){
        for(int i=0;i<n-j-1;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}
void printA(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
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
    cout<<b[n-2]<<" : is the Second Largest number.";

}*/
int main(){
    int max=INT_MIN;
    int M2=INT_MIN;
    int n;
    cout<<"Enter no of elements in array : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements in array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if (a[i]>max){
            M2=max;
            max=a[i];
        }else if(a[i]>M2&a[i]!=max){
            M2=a[i];
        }
    }
    cout<<"2nd Largest Number : "<<M2;
}