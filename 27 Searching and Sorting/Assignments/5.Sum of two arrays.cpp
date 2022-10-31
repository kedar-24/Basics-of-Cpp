#include <iostream>
using namespace std;
void printA(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[]={1,2,4};
    int b[]={7,5,5};
    int an=sizeof(a)/sizeof(a[0]);
    int bn=sizeof(b)/sizeof(b[0]);
    int max;
    if(an>bn){
        max=an;
    }else{
        max=bn;
    }
    int cn=max+1;
    int c[cn];
    int sum=0,carry=0;
    int i=an-1,j=bn-1,k=max;
    while(j>=0){
        sum=a[i]+a[j]+carry;
        c[k]=sum%10;
        carry=sum/10;
        i--;
        j--;
        k--;
    }
    while(i>=0){
        sum=a[i]+carry;
        c[k]=sum%10;
        carry=sum/10;
        i--;
        k--;
    }
    while(k>=0){
        sum=carry;
        c[k]=sum%10;
        carry=sum/10;
        k--;
    }
    printA(c,cn);
}