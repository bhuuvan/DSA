#include "bits/stdc++.h"
using namespace std;

void explainMap(){

    map<int, int> mpp;
    mpp[1]=2;

    cout<<mpp[1]<<endl;

    mpp.emplace(3,3);
    cout<<mpp[3]<<endl;

    mpp.insert({2,4});
    cout<<mpp[2]<<endl;
    cout<<"Second "<<endl;
    map<pair<int,int>, int> m1;
    m1[{5,9}]=10;
    m1[{6,12}]=12;
    m1[{7,15}]=145;

    

    for(auto it:m1){

        cout<<it.first.first<<" "<<it.first.second<<endl;
        cout<<"Value: "<<it.second<<endl;
    }
    
}
int main(){


    explainMap();
    return 0;
}