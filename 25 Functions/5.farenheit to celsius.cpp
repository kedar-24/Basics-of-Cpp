#include <iostream>
using namespace std;
void Far_to_Cel(int s,int e,int w){                             //f=9/5*(c)+32
    while(s<=e){
        cout<<s<<" "<<((s-32)*5/9)<<endl;
        s=s+w;
    }
}
int main(){
    int a,b,c;
    cout<<"enter starting,ending and width in farenheit"<<endl;
    cin>>a>>b>>c;
    Far_to_Cel(a,b,c);
}