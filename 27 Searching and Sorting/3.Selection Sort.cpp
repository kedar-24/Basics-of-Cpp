#include <iostream>
using namespace std;
void SelectionSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min=a[i],minInd=i;
        for(int j=i+1;j<n;j++){
            if (a[j]<min){
                min=a[j];
                minInd=j;
            }
        }
        int temp=a[i];
        a[i]=a[minInd];
        a[minInd]=temp;
    }
}

int main(){
    int input[]={25,24,2,3,0,1,9,10};
    int n=sizeof(input)/sizeof(input[0]);
    SelectionSort(input,n);
    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}