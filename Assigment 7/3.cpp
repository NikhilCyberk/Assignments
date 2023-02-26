/* Write a program to check whether a given number is there in the Fibonacci
series or not. */


#include<iostream>
using namespace std;
int main(){
	int n,i,count=0,first=0,sec=1,temp=0;
	cout << "enter a number : ";
	cin >> n;
	
	while(1){
		if(temp == n){
			cout << "number found ";
			break;
		}
		else if(n<temp){
			cout <<"number not found";/* code */
			break;
		}

		temp=first+sec;
		first = sec;
		sec = temp;
		count++;
	}
	return 0;
}
