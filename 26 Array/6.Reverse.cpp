#include <iostream>
using namespace std;
void printArray(int b[],int n){
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
}
void reverse(int b[],int n){
    int i=0; int j=n-1;
    int temp;
    while(i<j){
        temp=b[j];
        b[j]=b[i];
        b[i]=temp;
        i++;
        j--;
    }
}
int main(){
    int n;
    cout<<"Enter size of Array : ";
    cin>>n;
    int Array[100];
    int v=1;
    for(int i=0;i<n;i++,v++){
        Array[i]=v;
    }
    cout<<"Before Array : ";
    printArray(Array,n);
    cout<<endl<<"After Array : ";
    reverse(Array,n);
    printArray(Array,n);

}