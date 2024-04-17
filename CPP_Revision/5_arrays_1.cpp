#include"bits/stdc++.h"
using namespace std;
/*
Arrays
Array elements are stored in consecutive memory address.
But we dont know where the first address is.

*/
int main(){
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    arr[3] += 17;
    arr[4] = 1000;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}