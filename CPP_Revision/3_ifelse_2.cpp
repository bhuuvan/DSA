#include"bits/stdc++.h"
using namespace std;
//write a program that takes an input of age
// and prints if you are adult or not
// >=18 yes
// <=18 no
// else if
int main(){
   int age;
   cin >>age;
    if(age>=18){
        cout<<"You are an adult"<<endl;
    }
    else if(age<10){
        cout<<"You are not an adult"<<endl;  
    }
    
    
    return 0;
}