#include"bits/stdc++.h"
using namespace std;
/*
Tkae the age from the user and then decide accordingly
1. if age<18
not eligble for job
2. if age>=19
eligigle for job
3. if age>=55 and age<=57
eligible for the job, but reitrement soon
4. if age>57
retirement time

*/
//Method 1
int main(){
    int age;
    cin>> age;
    if(age<18){
        cout<<"Not eligible for job"<<endl;
    }
    else if (age<=54) {
        cout<<"Eligible for job"<<endl;
    
    
    }
    else if(age<=57){
            cout<<"Retirement soom"<<endl;
        }
    else {
            cout<<"Retirement time"<<endl;
        }
    
    return 0;
    }
    
    
   
    
