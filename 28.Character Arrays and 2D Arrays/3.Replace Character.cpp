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
    char a[1000000];
    char b[100];
    cout<<"input string : ";
    cin.getline(a,1000000);
    int l=Length(a);
    cout<<"char1 and char2 : ";
    cin.getline(b,100);
    for(int i=0;i<l;i++){
        if(a[i]==b[0]){
            a[i]=b[2];
        }
    }
    cout<<a<<endl;
}