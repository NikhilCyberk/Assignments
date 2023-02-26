/* Write a program to calculate HCF of two numbers */
#include<iostream>
using namespace std;
int main(){
	int n=1,i=2,first,sec,temp;
	cout << "enter first number : ";
	cin >> first;
	cout << "enter second number : ";
	cin >> sec;
	while(first>i){
		if((first%i==0) && (sec%i==0)){
			//n=n*i;
			break;
		}
		i++;
	}
	
	cout << "HCF OF"<< first<<"and "<<sec<<"is :" <<i;

	return 0;
}
