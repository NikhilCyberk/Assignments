

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int i, t,n;
    cout << "enter a number : ";
    cin >> n;
    for (i=1;i<sqrt(n);i++){
        t=i%n;
        if(t==0){
            cout << "number is not prime ";
            break;
        }
        else{
            cout << "number is prime ";
            break;
        }
    }
    return 0;
}