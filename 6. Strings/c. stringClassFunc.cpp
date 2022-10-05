#include<iostream>
#include<math.h>
#include<string.h>
#include<string> //needed for String Class
using namespace std;

int main(){

    string str; //creates a variable or "object" of Class String
    str = "Hello"; //creates a string array LARGER than "Hello"
    cout<<str<<endl;

    string str2;
    cout<<"Enter a phrase:"<<endl;
    getline(cin,str2); //use getline this way for objects
    cout<<str2<<endl;

    //a few functions of string class
    string str3="";

    cout<<str.length()<<endl; //a function available to object str of string class

    if(str3.empty())
        cout<<"String is empty"<<endl;
    else cout<<str3<<endl;

    string str4="Hello";
    string str5=" World";
    cout<<str4.capacity()<<endl;
    cout<<str4.append(str5)<<endl;
    cout<<str4.capacity()<<endl;

    //str4.empty();
    str4.insert(5," All ");
    cout<<str4;

    return 0;
}
