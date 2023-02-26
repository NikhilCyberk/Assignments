/*Write a program which takes the cost price and selling price of a product from the 
user. Now calculate and print profit or loss percentage.*/

#include<iostream>
using namespace std;
int main(){
    float cp,sp,result;
    cout << "enter cost prize :";
    cin >> cp;
    cout << "\nenter selling prize :";
    cin >> sp;
    result = ((sp-cp)/cp)*100;
    if(result > 0){
        cout <<"\nprofit percent :"<< result;
    }
    if(result < 0){
        cout <<"\nloss percent :"<< result;
    }
    return 0;
}