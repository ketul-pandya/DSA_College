#include <iostream>
using namespace std;
int recurs(int arr1[], int strt, int endd, int c)
{
    int mid = (strt + endd - 1) / 2;
    if (arr1[mid] == c)
    {
        return mid;
    }
    else if (arr1[mid] > c)
    {
        return recurs(arr1, strt, mid - 1, c);
    }

    else if (arr1[mid] < c)
        return recurs(arr1, mid + 1, endd, c);

    else
        return -1;
}

int main()
{
    int n, i, j, k, start, end, x;
    cout << "enter the number: ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the number that you want to match";
    cin >> x;
    k = recurs(arr, 0, n, x);
    if (k == -1)
    {
        cout << "you haven't found it";
    }
    else
        cout << "you found it at " << k;
}