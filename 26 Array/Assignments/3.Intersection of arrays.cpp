#include <iostream>
using namespace std;
int main(){
    int b[1000],a[1000];
    int an,bn;
    cout<<"Enter no of elements in first array : ";
    cin>>an;
    cout<<endl<<"Enter elements of array : ";
    for(int i=0;i<an;i++){
        cin>>a[i];
    }
    cout<<"Enter no of elements in second array : ";
    cin>>bn;
    cout<<endl<<"Enter elements of array : ";
    for(int i=0;i<bn;i++){
        cin>>b[i];
    }
    cout<<endl<<"Intersected elements : ";
    for(int i=0;i<an;i++){
        int j;
        for(j=0;j<bn;j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
                break;
            }
        }
    }
}