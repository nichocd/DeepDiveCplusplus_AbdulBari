#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main(){

    int A[5] = {2,4,6,8,10};

    //for(int i=0;i<=5;i++) dependent on size of array
    for(int x:A) //not dependent on size of array; can use "auto" instead of "int" if do not know types of array
    {
        cout<<x<<endl;
    }


    return 0;
}
