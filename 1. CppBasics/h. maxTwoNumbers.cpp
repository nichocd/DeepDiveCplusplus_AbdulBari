#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main(){

    int x,y;
    cout<<"Enter two numbers(separate w/space):";
    cin>>x>>y;

    if(x>y){
        cout<<"Greater number is: "<<x;
    }
    if(y>x){
        cout<<"Greater number is: "<<y;
    }
    if(x==y){
        cout<<"Both numbers are equal";
    }



    return 0;
}
