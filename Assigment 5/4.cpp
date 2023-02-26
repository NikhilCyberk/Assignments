#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout << "enter a number: ";
    cin >> n;

    for(i=1;i<=n;i++){
        cout << (i*2)-1 <<"\n";
    }
    return 0;
}