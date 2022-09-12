#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main(){

    int n,r;
    cout<<"Enter a number to reverse order: ";
    cin>>n;

    while(n>0)
    {
        r = n%10;
        n = n/10;
        cout<<r;
    }


    return 0;
}
