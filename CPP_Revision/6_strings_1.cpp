#include"bits/stdc++.h"
using namespace std;
/*
Strings
*/
int main(){
    string s= "yolo";
    int length = s.size();
    cout<<s[0]<<endl;
    cout<<s[length-1]<<endl;
    s[2]= 'j';
    cout<<s<<endl;
  
    return 0;
}