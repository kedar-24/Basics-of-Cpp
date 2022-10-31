#include <iostream>
using namespace std;
void spiral(int a[][100],int m,int n){
    int top=0, left=0, d=0, c=0;
    int bottom=m-1,right=n-1, i;
    while(c<(m*n)){
        if(d==0){
            for(i=left;i<=right;i++){                                  //left to right
                cout<<a[top][i]<<" ";
                c++;
            }
            top++;
        }else if(d==1){
            for(i=top;i<=bottom;i++){                                   //top to bottom
                cout<<a[i][right]<<" ";
                c++;
            }
            right--;
        }else if(d==2){
            for(i=right;i>=left;i--){                                   //right to left
                cout<<a[bottom][i]<<" ";
                c++;
            }
            bottom--;
        }else if(d==3){
            for(i=bottom;i>=top;i--){                                   //bottom to top
                cout<<a[i][left]<<" ";
                c++;
            }
            left++;
        }
        d=(d+1)%4;
    }

}
int main(){
    int y=0,t;
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
        spiral(a,m,n);
        cout<<endl;
    y++;
    }
}