#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main(){

    //int A[10]={2,6,3,8,9,1,12,4,5,11}; -> cannot find 3,1,12,4,5
    int A[10] = {2,6,8,9,11,12,15,33,41,56} //keys must be in sequential order
    int l=0,h=9,key,mid;

    cout<<"Enter key: ";
    cin>>key;


    while(l <= h)
    {
        mid = (l+h)/2;
        if(key==A[mid])
        {
            cout<<"Key is found at: "<<mid;
            return 0;
        }
        else if(key < A[mid]) h = mid-1;
        else l = mid+1;

    }
    cout<<"Key not found, outside of loop";


    return 0;
}
