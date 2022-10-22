#include <iostream>
using namespace std;
int main(){
    int a[100],an;
    cout<<"enter no of elements in array : ";
    cin>>an;
    cout<<"enter elements in array : ";
    for (int i=0;i<an;i++){
        cin>>a[i];
    }
    int x;
    cout<<"enter the number to be searched : ";
    cin>>x;
    int i;
    for(i=0;i<an;i++){
        if (a[i]==x){
            cout<<i;
            break; 
        }
    }
    if(i>=an){
        cout<<-1;
    }
}