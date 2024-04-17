#include"bits/stdc++.h"
using namespace std;


void doSomething(int arr[], int n){
    arr[0] = 0;
    arr[0]+=100;
    cout<<"Inside the function:"<<endl;
    cout<<arr[0]<<endl;
}



int main(){

    int arr[5];
    int n; // size of the array

    doSomething(arr,n);
    cout<<"In the main function: "<<endl;
    cout<<arr[0]<<endl;

    //Note: When you pass an array, it always goes by reference
    return 0;
}


