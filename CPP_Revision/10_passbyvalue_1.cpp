#include"bits/stdc++.h"
using namespace std;
//Pass by value
void doSomething(int num){

    cout<<num<<endl;
    num += 5;
    cout<<num<<endl;
    num += 5;
    cout<<num<<endl;
}


int main(){
    int num =10;

    doSomething(num);
    cout<<"sssssssss"<<endl;
    //Note here, the roginal value of the num did not change
    //This is pass-by-vALUE
    cout << num<< endl;
    return 0;
}


