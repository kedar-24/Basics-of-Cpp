#include <iostream>
using namespace std;
int main(){
    cout<<10%3<<endl;

    int a;
    int b;
    cout <<"enter values of a and b"<<endl;
    cin>>a>>b;

    bool isequal=(a==b);
    bool Aisgreater=(a>b);
    bool Aislesser=(a<b);
    cout<<"are they equal"<<isequal<<endl;
    cout<<"is a greater"<<Aisgreater<<endl;
    cout<<"is b greater"<<Aislesser<<endl;

    bool third = isequal && Aisgreater;
    bool fourth = isequal || Aisgreater;

    cout<<"is not equal"<<!isequal<<endl;

}