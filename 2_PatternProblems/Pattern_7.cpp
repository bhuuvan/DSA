#include"bits/stdc++.h"
using namespace std;

void patternSeven(int n){

    for(int i=0; i<n; i++){

        for(int a=0;a<n-i-1;a++){
            cout<<"  ";
        }
        for(int b=0;b<=2*i;b++){
            cout<<"* ";
        }
        for(int a=0;a<n-i-1;a++){
            cout<<"  ";
        }


        cout<<endl;
    }
}


int main(){


    int n = 5; // size of the pattern
    
    patternSeven(n);
    return 0;
}