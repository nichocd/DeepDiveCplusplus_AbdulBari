#include<iostream>
#include<math.h>
#include<string>
using namespace std;

//display a set of numbers in a 4x4 box
int main(){

    count=1;

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<j<<" ";
            //cout<<count++ why is this needed?
        }
        cout<<endl;
    }

    return 0;
}
