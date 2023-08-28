#include <iostream>
#include <bits/stdc++.h>
#include <stdarg.h>
using namespace std;

// --------------------------- Lonely Integer -----------------------

int lonelyinteger(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        int indicator = 1;
        for (int j = 0; j < a.size(); j++)
        {
            if (i == j)
            {
                continue;
            }
            else if (a[i] == a[j])
            {
                indicator = 0;
                break;
            }
        }
        if (indicator == 1)
        {
            return a[i];
        }
    }
    return -1;
}




//--------------------------------------- Diagonal Difference --------------------------------------
int diagonalDifference(vector<vector<int>> arr) {
    int lef_right = 0, right_left = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        lef_right += arr[i][i];
        right_left += arr[i][arr.size() - i - 1];
    }
    if (lef_right > right_left)
    {
        return lef_right - right_left;
    }
    return right_left - lef_right;
}

int main()
{
    int n = 7;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
   

    return 0;
}