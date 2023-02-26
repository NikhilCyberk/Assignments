/*Write a program to find the Nth term of the Fibonnaci series*/


#include<iostream>
using namespace std;
int main(){
	int n,i,first=0,sec=1,temp=0;
	cout << "enter a number : ";
	cin >> n;
	if(n>2){
	for (i=0;i<n-2;i++){
		temp=first+sec;
		first = sec;
		sec = temp;
	}
		cout << sec; 
	
}
else{
		cout << "enter value greater then 2 :)";
	}
	return 0;
}
