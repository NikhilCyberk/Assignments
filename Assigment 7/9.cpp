/*Write a program to check whether a given number is an Armstrong number
or not*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, temp = 0, t;
    cin >> a;
    string str = to_string(a);
    b = str.length();
    c = a;
    // cout << pow(a, b);

    while (a > 0)
    {
        t = a % 10;
        t = pow(t, b);
        temp = temp + t;
        a /= 10;
    }
    if (c == temp)
    {
        cout << "armstrong number ";
    }
    else
    {
        cout << "not armstrong number";
    }
}