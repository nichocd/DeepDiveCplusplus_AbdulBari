#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main(){

    int n,i,count=0;
    cout<<"Enter a number to find prime: ";
    cin>>n;

    for(i=1;i<=n;i++){
        if(n % i == 0)
        {
            count++;
        }

    }
    if(count==2)
        {
            cout<<n<<" is a prime!"<<endl;
        }
        else cout<<n<<" is not a prime!"<<endl;



    return 0;
}
