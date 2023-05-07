/*Write a program to check whether two given numbers are co-prime
numbers or not*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, temp, flag = 0;
    cin >> a >> b;
    a > b ? temp = a : temp = b;
    cout << "temp : " << temp << '\n';
    for (int i = 2; i < temp; i++)
    {
        flag = 0;
        if (a % i == 0)
        {
            cout << "flag 1 \n";
            flag = 1;
        }
        if (flag == 1)
        {
            if (b % i == 0)
            {
                flag = 2;
                cout << "flag 2 \n";
                break;
            }
        }
    }
    if (flag == 2)
    {
        cout << "not a co-primne " << '\n';
    }
    else
    {
        cout << "co-prime number\n";
    }
}