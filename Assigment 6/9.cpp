/*Write a program to calculate LCM of two numbers*/

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,lcm;
    cout << "enter two number : ";
    cin >> a >> b;
    if (a>b){
        lcm=a;
    }
    else{
        lcm=b;
    }
    while(1){
        if(lcm%a==0 && lcm%b==0){
            cout<<"The LCM of "<<a<<" and "<<b<<" is "<<lcm;
            break;
        }
        lcm++;
    }
    return 0;
}