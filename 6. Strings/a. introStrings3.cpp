#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){

    char s[20];
    char t[20];

    cout<<"Enter your first name: ";
    //cin>>S; //this is for a single word
    cin.getline(s,20); //use getline this for multiple words
    cout<<"Enter your last name: ";
    cin.getline(t,20);
    strcat(s,t);
    cout<<"Your name is "<<s<<endl;
    cout<<strlen(S);
    //strcpy;


    return 0;
}
