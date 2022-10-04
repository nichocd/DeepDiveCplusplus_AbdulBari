#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){

    //Find a substring in a string
    char s1[20]="programming";
    char s2[20]="gram";
    char s3[20]="minor";
    char s4[20]="elder";
    char s5[10]="235";
    char s6[10]="54.78";
    char s7[20]="x=10;y=5;z=12"; //commonly used in Web programming

    if(strstr(s1,s2)!=NULL)
        cout<<strstr(s1,s2)<<endl;
    else
        cout<<"Not found"<<endl;

    //Find a character in a string
    cout<<strchr(s1,'r')<<endl;

    //Compare two strings
    //s1 is 'm' which is greater than 'a'
    //so result will be positive and difference in ascii code
    cout<<strcmp(s3,s4)<<endl;

    //Convert string into number(int,long,etc)
    long int x = strtol(s5,NULL,10); //decimal number system so use base 10; if octal system use 8, binary system use 2
    float y = strtof(s6,NULL);

    cout<<x<<endl<<y<<endl;
    cout<<x+100<<endl<<y+1.11<<endl;

    //Find a key--variable and its value, in string using Tokenizer function
    //This function is commonly needed for strings used in Web programming
    char *token = strtok(s7,";");
    while(token!=NULL)
    {
        cout<<token<<endl;
        token=strtok(NULL,";");
    }


    return 0;
}
