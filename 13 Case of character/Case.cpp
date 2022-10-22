#include <iostream>
using namespace std;

int main(){
    char x;
    cout<<"Enter one character"<<endl;
    cin>>x;

    if (isupper(x)){
        cout<<"1"<<endl;
    }else if(islower(x)){
        cout<<"0"<<endl;
    }else{
        cout<<"-1"<<endl;
    }
}