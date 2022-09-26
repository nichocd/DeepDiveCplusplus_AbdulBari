#include<iostream>
#include<math.h>
#include<string>
using namespace std;
// heap memory allocation using pointer

main(){

    /* int A[5] = {1,2,3,4,5}; developer set array size */
    /* int *p = new int[5]; declare and initialize pointer on the heap */

    /* user provided array size on the STACK,
       array size can NOT be changed once initialized
    int size;
    cout<<"Enter the number of the elements for the array: ";
    cin>>size;
    int A[size];
    cout<<sizeof A; */

    // user provided array size on the HEAP
    // if you want to change the array size later in program
    int size;
    cout<<"Enter the number of the elements for the array: ";
    cin>>size;
    int *p = new int[size];

    delete []p; // remove previous array size
    p = new int[30]; //set new array size


    return 0;

// ALWAYS deallocate heap memory by using this:
// delete []p;
// p = nullptr;

// Accessing heap example
// A[2] = 15; A of 2 assign 15
// p[2] = 15; can access and assign 15 similarly using the pointer to the heap
}
