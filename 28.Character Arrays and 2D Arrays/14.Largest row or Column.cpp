#include <iostream>
using namespace std;
void LargRC(int a[][100],int m,int n){
    int sumr=0,maxr=INT_MIN,r=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sumr=sumr+a[i][j];
        }
        if (sumr>maxr){
            maxr=sumr;
            r=i;
        }
        sumr=0;
    }
    int sumc=0,maxc=INT_MIN,c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sumc=sumc+a[j][i];
        }
        if (sumc>maxc){
            maxc=sumc;
            c=i;
        }
        sumc=0;
    }

    if (maxc>maxr){
        cout<<"column "<<c<<" "<<maxc<<endl;
    }else{
        cout<<"row "<<r<<" "<<maxr<<endl;
    }
}
int main(){
    int t,y=0;
    cin>>t;
    while(y<t){
        int a[100][100];
        int m,n;
        cin>>m>>n;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        LargRC(a,m,n);
    y++;
    }
}