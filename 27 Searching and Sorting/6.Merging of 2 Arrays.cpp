#include <iostream>
using namespace std;
void MergeA(int a[],int an,int b[],int bn,int c[]){
    int n=an+bn;
    c[n];
    int i=0,j=0,k=0;
    while(i<an&&j<bn){
        if (a[i]<b[j]){
            c[k]=a[i];
            k++;
            i++;
        }else{
            c[k++]=b[j++];
        }
    }
    while(i<an){
        c[k++]=a[i++];
    }
    while(j<bn){
        c[k++]=b[j++];
    }
        
}


int main(){
    cout<<"enter no of elements in array A : ";
    int an,bn;
    cin>>an;
    int a[an];
    cout<<"Enter elements of array A : ";
    for(int i=0;i<an;i++){
        cin>>a[i];
    }
    cout<<"enter no of elements in array B : ";
    cin>>bn;
    int b[bn];
    cout<<"Enter elements of array B : ";
    for(int i=0;i<bn;i++){
        cin>>b[i];
    }
    int n=an+bn;
    int c[n];
    MergeA(a,an,b,bn,c);
    cout<<"Merged Array : ";
    for(int i;i<n;i++){
        cout<<c[i]<<" ";
    }

} 