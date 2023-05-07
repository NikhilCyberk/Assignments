/*
Write a program to print all Armstrong numbers under 1000
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, temp = 0, t;
    // cin >> a;

    for (int i = 10; i < 1000; i++)
    {
        a = i;

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
            cout << c << " ";
        }
        t = 0;
        temp = 0;
    }
}