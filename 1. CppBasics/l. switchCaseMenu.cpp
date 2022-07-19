#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main(){

    int a,b,c,option;

    cout<<"Menu\n";
    cout<<"1. Add\n"<<"2. Subtract\n"<<"3. Multiply\n"<<"4. Divide\n"<<endl;

    cout<<"Enter your Menu Option: ";
    cin>>option;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    switch(option){

        case 1: c=a+b;
            break;
        case 2: c=a-b;
            break;
        case 3: c=a*b;
            break;
        case 4: c=a/b;
            break;
        default: cout<<"Choice is invalid!";
            break;
    }

    cout<<"Result is "<<c<<endl;

    return 0;
}
