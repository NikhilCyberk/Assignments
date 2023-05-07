/*Write a program to find next Prime number of a given number*/

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, flag;
    cin >> a;
    for (int i = a + 1; i < a + 100; i++)
    {
        flag = 0;
        for (int j = 2; j < a + 100; j++)
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
            break;
        }
    }
}