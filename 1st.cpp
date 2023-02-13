#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
using namespace std;
int recurs(int arr1[], int strt, int endd, int val)
{
    int k;
    k = sizeof(arr1) / 2;
    int len;
    len = sizeof(arr1);
    if (arr1[k] > val)
    {
        return recurs(arr1, 0, k - 1, val);
    }
    if (arr1[k] < val)
    {
        return recurs(arr1, k + 1, len, val);
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int x;
    cout << "enter the number";
    cin >> x;
    if (arr[2] == x)
    {
        cout << "it found at middle";
    }
    else
    {
        int t;
        t = recurs(arr, 0, 5, x);
        if (t == x)
        {
            cout << "it is matched";
        }
        else
            cout << "it is not matched";
    }

    return 0;
}