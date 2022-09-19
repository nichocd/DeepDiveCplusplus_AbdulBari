#include<iostream>
#include<math.h>
#include<string>
using namespace std;

//create a 4x4 box with * on the top right

int main(){

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(i>j)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
