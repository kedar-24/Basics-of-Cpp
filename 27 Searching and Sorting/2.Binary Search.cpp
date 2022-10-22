#include <iostream>
using namespace std;
int main(){
    int a[1000],an;
    cout<<"enter no of elements in array : ";
    cin>>an;
    for (int i=0;i<an;i++){
        cin>>a[i];
    }
    int n;
    cout<<"Enter element to be searched : ";
    cin>>n;
    int s=0,e=an-1;
    while(s<=e){
    int mid=(s+e)/2;
         if (n>a[mid]){
            s=mid+1;
        }else if(n<a[mid]){
            e=mid-1;
        }else{
            cout<<mid;
            break;
        }    
    }if(s>e){
        cout<<-1;
    }


}