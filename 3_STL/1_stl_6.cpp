#include "bits/stdc++.h"
using namespace std;

void vectorStl6(){
    vector<int> v= {1,2,3,4,5,6,7,8,9,10};
    v.erase(v.begin()+1, v.begin()+3);
    
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;

    v.insert(v.begin(),300);

    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;

    v.insert(v.begin()+1,2,100);
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;

    vector<int> copy(2,50);
    for(auto it:copy){
        cout<<it<<" ";
    }
    cout<<endl;

    v.insert(v.begin(),copy.begin(),copy.end());
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<v.size()<<endl;;
    v.pop_back();
    cout<<v.size()<<endl;
    cout<<v.empty();
    v.clear();
    cout<<v.empty();




}
int main(){


    vectorStl6();
    return 0;
}