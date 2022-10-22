#include <iostream>
using namespace std;
int main(){
    char c;
    c=cin.get();
    int count=0;
    int cs=0;
    int cn=0;
    while(c!='$'){
        count++;
        if (c==' '||c=='\t'||c=='\n'){
            cs++;
        }else if(c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'||c=='0'){
            cn++;
        }
        c=cin.get();
    }
    cout<<count<<endl;
    cout<<cs<<endl;
    cout<<cn<<endl;
}