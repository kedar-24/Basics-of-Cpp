#include <iostream>
#include <cstring>
using namespace std;
void Printprefix(char a[]){
    int c=0;
    int l=strlen(a);
    while(c<l){
        for(int i=c;a[i]!='\0';i++){
            for(int j=c;j<=i;j++){
                cout<<a[j];
            }
            cout<<endl;
        }
    c++;
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