#include <iostream>
using namespace std;

int main(){
    int a=10,b=20,c=100;
    if(a<=b||b<=c){
        cout<<"Hello";
    }else if(a<=b||a<=c){
        cout<<"Hi";
    }else{
        cout<<"Hey";
    }
}