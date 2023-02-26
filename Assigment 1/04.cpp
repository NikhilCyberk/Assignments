//WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.


#include<iostream>
#define PI 3.14
using namespace std;
int main(){
    float radius,area;
    cout <<"enter radius :";
    cin >> radius;
    area=PI*radius*radius;
    cout <<"Area of circle is "<< area << " having the radius "<< radius;
    return 0;
}   