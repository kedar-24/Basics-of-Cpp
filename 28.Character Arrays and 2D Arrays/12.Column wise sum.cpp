#include <iostream>
#include <cstring>
using namespace std;

void PrintSoC(int a[][100], int m, int n){
    int i,j,sum=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            sum=sum + a[j][i];
        }
        cout<<sum<<" ";
        sum=0;
    }
}
int main(){
    int a[100][100];
    int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    PrintSoC(a,m,n);
}