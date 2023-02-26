/*Write a program which takes the month number 
as an input and display number of 
days in that mont*/

#include<iostream>
using namespace std;
int main(){
    int month;
    cout << "enter month :";
    cin >> month;
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ){
        cout << "month cantain 31 days";
    }
    else if(month == 4 ||month == 6 ||month == 9 ||month == 11){
        cout << "month cantain 30 days"; 
    }
    else if(month == 2){
        cout << "month cantain 28 or 29 days";
    }
    return 0;
}

// 31-1 3 5 7 8 10 12  
// 28-2
// 30-4 6 9 11