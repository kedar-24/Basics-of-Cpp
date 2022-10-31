#include <iostream>
using namespace std;
int Length(char a[]){
    int count=0;
    for(int i=0; a[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char a[100];
    cout<<"Enter your name : ";
    cin>>a;
    cout<<"Name : "<<a<<endl;
    cout<<"Length : "<<Length(a)<<endl;
}