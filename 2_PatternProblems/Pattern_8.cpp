#include"bits/stdc++.h"
using namespace std;

void pattern8(int n){

    for(int i=0; i<n; i++){

       for(int b =0; b<i; b++){

        cout<<"  ";
       }
       for(int a =0; a<(2*n-2*i)-1; a++){

        cout<<"* ";
       }

       for(int b =0; b<i-1; b++){

        cout<<"  ";
       }


        cout<<endl;
    }
}


int main(){


    int n = 5; // size of the pattern
    
    pattern8(n);
    return 0;
}