#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main(){

    int A[10],n=10;
    cout<<"Enter a list of numbers (spaced) for the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    int key;
    cout<<"Enter the key: ";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(key==A[i])
        {
            cout<<"Key found at index: "<<i;
            return 0;
        }

    }
    cout<<"Key not found!";

    return 0;
}
