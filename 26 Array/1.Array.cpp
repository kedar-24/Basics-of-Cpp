#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[100];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<endl;
    }

    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<"Max :"<<max<<endl;
}