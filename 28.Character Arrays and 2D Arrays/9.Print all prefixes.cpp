#include <iostream>
#include <cstring>
using namespace std;
void Printprefix(char a[]){
    for(int i=0;a[i]!='\0';i++){
        for(int j=0;j<=i;j++){
            cout<<a[j];
        }
        cout<<endl;
    }
}
int main(){
    char a[100];
    cout<<"Enter string : ";
    cin>>a;
    char b[100];
    int l=strlen(a);
    Printprefix(a);
}