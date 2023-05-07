/*Write a program to print all Prime numbers between two given numbers*/

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, flag;
    cin >> a >> b;
    for (int i = a; i < b + 1; i++)
    {
        flag = 0;
        for (int j = 2; j < b + 1; j++)
        {
            if (i != j)
            {
                if (i % j == 0)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            cout << i << " ";
        }
    }
}