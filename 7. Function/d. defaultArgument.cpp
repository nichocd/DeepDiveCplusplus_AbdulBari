#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

//use one function for overloading with multiple parameters

int add(int x, int y, int z=0)
{
    return x+y+z;
}

int main(){

    cout<<add(5,6)<<endl;
    cout<<add(5,6,9)<<endl;



    return 0;
}
//
