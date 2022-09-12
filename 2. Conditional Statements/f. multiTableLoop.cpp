#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main(){

    int n,i,j=0;
    cout<<"Enter a number for it's multiplication table: ";
    cin>>n;

    for(i=1;i<=12;i++){
        j = n*i;
        cout<<n<<" x "<<i<<" = "<<j<<endl;
    }


    return 0;
}
