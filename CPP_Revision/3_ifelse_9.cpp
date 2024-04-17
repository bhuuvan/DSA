#include"bits/stdc++.h"
using namespace std;
/*
Playing with if-else

*/
//Method 2
int main(){
    int age;
    cin>> age;
    
    if(age < 20){
        cout<<"Hello World"<<endl;
    }

    else if (age==20){
        cout<<"Equal to 20"<<endl;
    }

    else if (age>50){
        cout<<"Greater than 50"<<endl;

        if( age > 60){
            cout<<"Retirement time"<<endl;

        }
        else{
            cout<<"You can work more"<<endl;
        }
    }

    return 0;
    }

    
    
   
    
