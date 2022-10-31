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
    cout<<"Enter to Check Palindrome : ";
    cin>>a;
    int l=Length(a);
    bool b=false;
    for(int i=0,t=l-1;i<l,t>i;i++,t--){
        if(a[i]==a[t]){

        }else{
            b=true;
        }
    }
    if (b){
        cout<<a<<" is not a palindrome";
    }else{
        cout<<a<<" is a palindrome";
    }
}