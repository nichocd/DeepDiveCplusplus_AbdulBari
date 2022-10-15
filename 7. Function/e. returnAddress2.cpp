#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

//return by address allows the main function to access
//heap memory from 'func' passing the address of pointer p to array on the heap

int * func(){

    int *p = new int[5];
    for(int i=0;i<5;i++)
    {
        p[i] = i+1;
    }
    cout<<p<<endl; //see address

    return p;
}
int main(){

    int *q = func();
    cout<<q<<endl; //see address

    for(int i=0;i<5;i++)
    {
        cout<<q[i]<<endl;
    }

    return 0;
}
