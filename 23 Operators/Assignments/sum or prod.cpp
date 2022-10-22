#include <iostream>
using namespace std;
int main(){
    int n;
    int c;
    cout<<"Enter number n\n";
    cin>>n;
    cout<<"Select choice:\n1.Sum of numbers till "<<n<<"\n2.Product of numbers to "<<n<<"\n";
    cin>>c;
    if (c==1){
        int sum=0;
        for(int i=1;i<=n;i++){
            sum+=i;
        }
        cout<<sum<<" is the sum from 1 till "<<n;
    }else if(c==2){
        int product=1;
        for(int i=1;i<=n;i++){
            product=product*i;
        }
        cout<<product<<" is the product from 1 to "<<n;
    }else{
        cout<<-1;
    }

    
}