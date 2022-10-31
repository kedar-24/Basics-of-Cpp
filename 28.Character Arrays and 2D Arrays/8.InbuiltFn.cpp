#include <iostream>
#include <cstring>
using namespace std;
int main () {
    char a[100];
    cout<<"Enter string 1 : ";
    cin.getline(a,100);
    char b[100];
    cout<<"Enter string 2 : ";
    cin.getline(b,100);
    int la=strlen(a);                                            //length of string 1   (1)
    int lb=strlen(b);                                            //length of string 2   (1)
    /*int compare=strcmp(a,b);                                //compares 2 strings and gives output as 0 if equal and non 0 random integer if not equal.   (2)             
    if (compare==0){
        cout<<"Equal Strings.";
    }else{
        cout<<"Unequal Strings.";
    }*/
    ///strcpy(b,a);                                               //Copies String to another string strcpy(destination_str,Source_str)   (3)
    cout<<a<<" is str 1"<<endl;
    //strcpy(a,"Hello");                                         //Copies String to another string strcpy(destination_str,Source_str)   (3)      
    cout<<b<<" is str 2."<<endl;                                
    cout<<a<<" is str 1"<<endl;
    strncpy(a,b,3);                                                 //copies part of string to another string strncpy(destination_str,source_str,n'no of places from begining')    (4)
    cout<<a<<" is str 1"<<endl;

}   