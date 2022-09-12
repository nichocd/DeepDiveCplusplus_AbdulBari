#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main(){

    int n=7,sum=0;
    int A[7]={2,4,6,8,10,12,14};


    for(int i=0;i<n;i++)
    {
        sum = sum + A[i];

    }


    cout<<"Sum of array is: "<<sum<<endl;




    return 0;
}
