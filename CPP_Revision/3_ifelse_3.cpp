#include"bits/stdc++.h"
using namespace std;
/*
A school has the following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 TO 49 -D
d. 50 TO 59 - C
e. 60 TO 79 - B
f. 80 TO 100 - A
Ask user to enter the marks and get the output for the corresponding grade
*/
//Method 1
int main(){
    int marks;
    cin >> marks;

    if(marks<25){
        cout<<"F"<<endl;
    }
    if(marks >=25 && marks <=44){
        cout<<"E"<<endl;
    }

    if(marks >=45 && marks <=49){
        cout<<"D"<<endl;
    }
    if(marks >=50 && marks <=59){
        cout<<"C"<<endl;
    }
    if(marks >=60 && marks <=79){
        cout<<"B"<<endl;
    }
    if(marks >=80 && marks <=100){
        cout<<"A"<<endl;
    }
    
   
    
    return 0;
}