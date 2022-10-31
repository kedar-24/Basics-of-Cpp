#include <iostream>
using namespace std;
int Len(char a[]){
    int c=0;
    for (int i=0;a[i]!='\0';i++){
        c=c+1;
    }
    return c;
}
char RemovS(char a[]){
    int i=0,j=0;
    while(a[i]){
        if (a[i]!=' '){
            a[j++]=a[i];
            i++;
        }
    }
    a[j]='\0';
    int l=Len(a);
    return a[l];
}
int main(){
    char a[10000];
    cout<<"Enter line : ";
    cin.getline(a,10000);
    cout<<"\n"<<RemovS(a);
}