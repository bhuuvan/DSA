#include"bits/stdc++.h"
using namespace std;

void patternSix(int n){

    for(int i = 0; i<n; i++){

        for(int j =0;j<n-i;j++){

            cout<<j+1<<" ";
        }


        cout<<endl;
    }
}

void patternSix2(int n){

    for(int i =0; i<n; i++){

       for(int j =0; j<n-i;j++){

        cout<<j+1;
       }
       
            
       

        cout<<endl;
     }

}
int main(){


    int n = 5; // size of the pattern
    
    patternSix2(n);
    return 0;
}