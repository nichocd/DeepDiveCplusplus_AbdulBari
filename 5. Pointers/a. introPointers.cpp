#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main(){

    int a = 10;
    int *p = &a;

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;

    return 0;
}
// Problems with Pointers
/*
1. Uninitialized pointers
->must do 1 of 3 things:
int *p = &x; -- assign to a variable
int *p = new int[5]; -- on the heap
p = (int *)0x05638C; -- directly assign to known location in the program

2. Memory Leaks
->when heap memory is NOT deallocated when it is not needed by the program
delete []p;
p = nullptr;

3. Dangling pointers
-> pointer a in main is given or shared with a function (pointer b)
when the function concludes and pointer b is deleted, then trying to use
pointer a to access that memory produces an error at runtime as it is no longer available

*/
