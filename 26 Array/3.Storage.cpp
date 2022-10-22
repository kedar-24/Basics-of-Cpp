#include <iostream>
using namespace std;
void PrintArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    int b[100000];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    PrintArray(b,n);
    cout<<b;

}