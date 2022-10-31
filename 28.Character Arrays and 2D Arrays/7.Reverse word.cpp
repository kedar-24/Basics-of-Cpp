#include <iostream>
using namespace std;
int Len(char a[]){
    int c=0;
    for(int i=0;a[i]!='\0';i++){
        c++;
    }
    return c;
}
void reverseS(char a[],int l,int r){
    int i=l,j=r-1;
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
    int l=Len(a);
    reverseS(a,0,l);
    /*reverseS(a,6,l);
    reverseS(a,0,5);*/
    int j=0,k=0;
    for (int i=0;i<=l;i++){
        if(a[i]==' '||a[i]=='\0'){
            reverseS(a,k,i);
            k=i+1;
        }
    }
    cout<<a;
}