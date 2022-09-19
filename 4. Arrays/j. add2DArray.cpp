#include<iostream>
#include<math.h>
#include<string>
using namespace std;

//add two 2-dimensional arrays

int main(){

    int A[2][3] = {2,5,9,6,9,15};
    int B[2][3] = {3,6,1,7,1,1};
    int C[2][3];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
        for(int j=0; j<3; j++)
        {
            cout<<C[i][j];
        }
        cout<<endl;
    }

    return 0;
}
