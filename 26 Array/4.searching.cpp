#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of Array : ";
    cin>>n;
    int b[10000];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int j;
    cout<<"Enter element to be searched : ";
    cin>>j;
    int c=0;
    for(int i=0;i<n;i++){
        if (b[i]==j){
            cout<<i<<" is the place of element."<<endl;
            c=c+1;
            break;
        }
    }
    if(c==0){
        cout<<-1;
    }
}