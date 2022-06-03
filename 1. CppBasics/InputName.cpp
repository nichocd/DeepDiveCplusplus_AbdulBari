#include<iostream>
using namespace std;

int main(){

    string name;
    cout<<"May I have your name? ";
    //cin>>name;
    getline(cin,name);
    cout<<"welcome "<<name<<endl;


    return 0;
}
