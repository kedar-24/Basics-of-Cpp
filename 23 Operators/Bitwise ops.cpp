#include <iostream>
using namespace std;
int main(){
    int kor= 15 | 30;
    int kand= 15 & 30;
    int knot= ~15;
    int kxor= 15 ^ 30;
    int ls=15<<2;
    int rs=15>>2;

    cout<<kor<<endl;
    cout<<kand<<endl;
    cout<<knot<<endl;
    cout<<kxor<<endl;
    cout<<ls<<endl;
    cout<<rs<<endl;
}