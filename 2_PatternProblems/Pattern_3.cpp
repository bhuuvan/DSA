#include"bits/stdc++.h"
using namespace std;

void patternThree(int n){

    for(int i = 0; i<n;i++){

        for(int j =0;j<=i;j++){

            cout<<j+1<<" ";
        }

        cout<<endl;
    }
}


int main(){


    int n = 6; // size of the pattern
    patternThree(n);
    return 0;
}