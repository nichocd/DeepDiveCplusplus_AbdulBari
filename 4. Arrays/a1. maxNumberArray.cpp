#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main(){

    int A[7]={8,2,4,9,3,11,6};
    int n=7,sum=0,max=A[0];

    for(int i=0;i<n;i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }

    cout<<"Max is: "<<max;

    return 0;
}
