#include<iostream>
#include<math.h>
#include<string.h>
#include<string>
using namespace std;


    int add(int x, int y)
    {
        return x+y;
    }

    int add(int x, int y, int z)
    {
        return x+y+z;
    }

    float add(float x, float y, float z)
    {
        return x+y+z;
    }

int main(){


    int a=10,b=8,c,d;

    c = add(a,b);
    d = add(a,b,c);
    cout<<c<<endl<<d<<endl;

    float i=10.5,j=8.5,k=5.5,l;

    l = add(i,j,k);
    cout<<l<<endl;


    return 0;
}
