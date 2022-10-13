#include<iostream>
#include<math.h>
#include<string.h>
#include<string>
using namespace std;

template<class T>
T Max(T x, T y)
{
    if(x > y)
        return x;
    else
        return y;
}

int main(){

    cout<<Max(10,5)<<endl;
    cout<<Max(10.5,5.5)<<endl;

    return 0;
}
