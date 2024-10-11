#include "bits/stdc++.h"
using namespace std;

void explainSet(){

    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(23);

    auto it= s.find(23);
    cout<<*(it)<<endl;

    s.erase(23);

    auto it1= s.find(23);
    cout<<*(it1)<<endl;



    
}
int main(){


    explainSet();
    return 0;
}