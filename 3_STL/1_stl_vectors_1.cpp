#include "bits/stdc++.h"
using namespace std;


void explainVectors(){

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    cout<<v[0]<<" "<<v[1]<<endl;

    vector<pair<int,int>> vec;
    vec.push_back({7,8});
    vec.emplace_back(9,11);
    cout<<vec[1].first<<endl;

    vector<int> v1(5,100);
    cout<<v1[4]<<endl;

    vector<int> v2(5);
    cout<<v2[4]<<endl;

    vector<int> v3(5,20);
    vector<int> v4(v1);

    cout<<v4[0]<<endl;

    v4.push_back(888);
    cout<<v4[5]<<endl;



}
int main(){
    explainVectors();

    return 0;
}