#include <iostream>
using namespace std;

void PrintA(int a[][5], int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int a[5][5]={{1,2},{3,4}};
    PrintA(a,5,5);
    
    
    /*
    int a[100][100];
    int m,n;
    cin>>m>>n;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    PrintA(a,m,n);
    */
}