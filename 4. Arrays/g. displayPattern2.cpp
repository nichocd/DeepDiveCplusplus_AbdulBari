#include<iostream>
#include<math.h>
#include<string>
using namespace std;

//pattern to create 4x4 box with * in the bottom left
int main(){

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(i>=j)
                cout<<"*";
        }
        cout<<endl;

    }


    return 0;
}
