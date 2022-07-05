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
    else{
        cout<<"Greater number is: "<<y;
    }



    return 0;
}
