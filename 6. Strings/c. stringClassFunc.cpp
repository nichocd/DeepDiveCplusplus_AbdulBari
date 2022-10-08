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
    cout<<str4<<endl;

    //change string from uppercase to lowercase
    string str6="WELCOME";

    for(int i=0;str6[i]!='\0';i++)
    {
        str6[i]=str6[i]+32;
    }
    cout<<str6<<endl;

    //count number of vowels, consonants, words*
    //*number of words are determined by number of spaces
    string str7 = "how MAny Words";
    int vowels=0, consonant=0,space=0;

    for(int i=0;str7[i]!='\0';i++)
    {
        if(str7[i]=='A' || str7[i]=='a' || str7[i]=='E' || str7[i]=='e' || str7[i]=='I' || str7[i]=='i'
           || str7[i]=='O' || str7[i]=='o' || str7[i]=='U' || str7[i]=='u')
            vowels++;
        else if(str7[i]==' ')
            space++;
        else
            consonant++;
    }
    cout<<"Vowels are: "<<vowels<<endl;
    cout<<"Words are: "<<space+1<<endl; //+1 is needed
    cout<<"Consonants are: "<<consonant<<endl;

    //check if string is Palindrome
    //example MADAM
    //1. find the length of string
    //2. copy string in reverse into an empty string, start with length minus 1
    //3. use 'compare' function to compare both strings

    string str8="MADAM";
    string str8rev="";
    int len = (int)str8.length(); //len function returns long int so have to typecast as short int
    str8rev.resize(len); // resize str8rev to match length of str8

    for(int i=0,j=len-1;i<len;i++,j--) //loop to reverse copy str8 string into str8rev string
    {
        str8rev[i]=str8[j];
    }
    str8rev[len]='\0';

    if(str8.compare(str8rev)==0)
    {
        cout<<"Palindrome found: "<<str8rev<<endl;
    }
    else
        cout<<"Palindrome not found"<<endl;


    // find username in email address
    string email="dwtbkr@gmail.com";
    int i=(int)email.find('@');//will give long int so typecast as int
    string username=email.substr(0,i);

    cout<<"Username is: "<<username<<endl;

    return 0;
}

