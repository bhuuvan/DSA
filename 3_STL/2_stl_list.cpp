#include "bits/stdc++.h"
using namespace std;

void vlistStl(){

    list<int> l1;
    l1.push_back(2);
    for(auto it:l1){
        cout<<it<<" ";
    }
    cout<<endl;
    l1.emplace_back(4);
    for(auto it:l1){
        cout<<it<<" ";
    }
    cout<<endl;

    l1.push_front(9);
    for(auto it:l1){
        cout<<it<<" ";
    }
    cout<<endl;
    
    l1.emplace_front(12);
    for(auto it:l1){
        cout<<it<<" ";
    }
    cout<<endl;
    



}
int main(){


    vlistStl();
    return 0;
}