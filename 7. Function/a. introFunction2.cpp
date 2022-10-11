#include<iostream>
#include<math.h>
#include<string.h>
#include<string>
using namespace std;

    void display()
    {
        cout<<"Hello";
    }

    float add(float x, float y)
    {
        float z;
        z = x+y;
        return z;
    }

    int maxim(int a, int b, int c)
    {
        if(a>b && a>c)
            return a;
        else if(b>c)
            return b;
        else
            return c;
    }

int main(){

    //display(); simple function but never use
    //cout in a function

    float x=2.3, y=7.9, z;
    z = add(x,y);
    cout<<z<<endl;

    int a=3,b=4,c=9,d;
    d = maxim(a,b,c);
    cout<<d<<endl;


    return 0;
}
