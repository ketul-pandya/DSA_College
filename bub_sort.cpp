#include <iostream>
using namespace std;
int main()
{
    cout << "enter the size of array" << endl;
    int n, i, j;
    int temp = 0;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}