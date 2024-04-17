#include"bits/stdc++.h"
using namespace std;

void patternFive(int n){

    for(int i = 0; i<n; i++){

        for(int j = n; j>i;j=j-1){
            
            cout<<"* ";
        }


        cout<<endl;
    }

}
int main(){


    int n = 5; // size of the pattern
    patternFive(n);
    return 0;
}