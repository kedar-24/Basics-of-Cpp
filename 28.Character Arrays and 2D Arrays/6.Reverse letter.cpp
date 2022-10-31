#include <iostream>
using namespace std;
int Len(char a[]){
    int c=0;
    for(int i=0;a[i]!='\0';i++){
        c++;
    }
    return c;
}
void reverseS(char a[]){
    int l = Len(a);
    int i=0,j=l-1;
    while(i<j){
        char temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}
int main(){
    char a[100];
    cout<<"Enter input : ";
    cin.getline(a,100);
    reverseS(a);
    cout<<a;
}