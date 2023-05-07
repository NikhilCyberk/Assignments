/* Write a program to print all Prime numbers under 100*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int flag;
    for (int i = 1; i < 101; i++)
    {
        flag = 0;
        for (int j = 2; j < 101; j++)
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