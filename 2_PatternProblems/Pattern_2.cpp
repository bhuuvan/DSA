#include"bits/stdc++.h"
using namespace std;

void patternOne(int n){

    for(int i=0; i<n;i++)
    {

        for(int j = 0; j<n;j++){
                cout<<"* ";
        }
        cout<<endl;
    }
}
void patternTwo(int n){


    for(int i =0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"* ";
        }

        cout<<endl;
    }
}



int main(){


    int n = 6; // size of the pattern
    patternOne(n);
    cout<<"--------"<<endl;
    patternTwo(n);
    return 0;
}