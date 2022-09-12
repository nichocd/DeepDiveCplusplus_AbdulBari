#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main(){

    //find out if number is an Armstrong

    int n,r,m,sum=0;
    cout<<"Enter a number to reverse order: ";
    cin>>n;
    m=n;

    while(n>0) //1724
    {
        r = n%10; //1724 mod 10 = 4
        n = n/10; //172 / 10 = 17.2
        sum = sum + r*r*r;
    }
    if(sum==m)
    {
        cout<<"This number is Armstrong!";
    }
    else cout<<"This number is not Armstrong!";

    return 0;
}
