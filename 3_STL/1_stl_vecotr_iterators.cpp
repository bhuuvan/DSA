#include "bits/stdc++.h"
using namespace std;


void vectorIterators(){
    vector<int> v={10,20,30,40,50};
    cout<<v[0]<<" "<<v[1]<<" "<<v[4]<<endl;

    //ITERATORS
    vector<int>::iterator it= v.begin();
    cout<<*(it)<<endl;
    it++;
    cout<<*(it)<<endl;

    vector<int>::iterator it1= v.end();
    cout<<*(it1-1)<<endl;


    //iterator
    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl; 

    for(auto it=v.begin(); it!=v.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    for(auto it:v){
        cout<<it<<" ";
    }



}
int main(){

    vectorIterators();

    return 0;
}