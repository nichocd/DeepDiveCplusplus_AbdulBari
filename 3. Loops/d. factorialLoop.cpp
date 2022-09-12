#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main(){

    int i, n, fact=1;
    cout<<"Enter a number to determine its factorial: ";
    cin>>n;

    for(i=1;i<=n;i++){
        fact = fact*i;
    }

    cout<<"Factorial of "<<n<<" = "<<fact<<endl;

    return 0;
}
//
