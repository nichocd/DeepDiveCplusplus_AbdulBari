#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int add(int x, int y)
{
    return x+y;
}

int main(){

    int (*fp)(int,int); //declaration
    fp = add; //initialization
    (*fp)(10,5); //function call

    //return 0;
}
