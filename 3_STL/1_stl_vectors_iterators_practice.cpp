#include "bits/stdc++.h"
using namespace std;


void iteratorsVectorPractice(){

    vector<int> v={2,4,5,6,7,4};

    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        cout<<*(it)<<endl;
    }
    cout<<"--------"<<endl;
    for(auto it=v.begin();it!=v.end(); it++){
        cout<<*(it)<<endl;
    }
    cout<<"--------"<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }






}


int main(){
    iteratorsVectorPractice();

    return 0;
}