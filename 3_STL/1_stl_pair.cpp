#include "bits/stdc++.h"
using namespace std;

void explainPair(){

    pair<int, int> p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;


    pair<int, pair<int, int>> p1 = {1, {4, 6}};
    cout << p1.first << " " << p1.second.second << " " << p1.second.first << endl;

    pair<int, int> arr[] = {{1,2},{3,4},{5,6}};
    cout<<arr[2].second<<endl;


}



int main(){
    explainPair();

    return 0;
}