#include "bits/stdc++.h"
using namespace std;

void explainPriorityQueue(){
    // maximum heap
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);
    pq.push(3);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    //minimum heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    cout<<"FROM HERE ITS Minimum heap"<<endl;
    pq1.push(5);
    pq1.push(2);
    pq1.push(8);
    pq1.emplace(10);
    pq1.push(3);

    cout<<pq1.top()<<endl;
    pq1.pop();
    cout<<pq1.top()<<endl;




}
int main(){


    explainPriorityQueue();
    return 0;
}