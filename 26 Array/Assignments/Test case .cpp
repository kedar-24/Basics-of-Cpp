#include <iostream>
using namespace std;
void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[]={1,5,6,5,1,3,2,8,7};
    int s1= sizeof(a)/sizeof(a[0]);
    printArray(a,s1);
    cout<<"Unique elements : ";
    for(int i=0;i<s1;i++){
        int j;
        for(j=0;j<i;j++){
            if (a[i]==a[j]){
                break;
            }
        }
        if (i==j){
            cout<<a[i]<<" ";
        }
    }
}