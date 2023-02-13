#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp;
    int arr[n], i, j, k;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
    cout << endl
         << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}