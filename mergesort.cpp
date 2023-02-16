#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void merge(int A[], int mid, int low, int high)
{
    // cout << mid << " ";
    int i, j, k, B[high - low + 1];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }

    for (int z = low; z <= high; z++)
    {
        A[z] = B[z];
    }
}
void divide(int array[], int low, int high)
{
    // int count = 0;
    // int cnt = 1;
    // int tt = 2;
    if (low < high)
    {
        int mid;
        mid = (low + high) / 2;
        divide(array, low, mid);
        // cout << count << " ";
        divide(array, mid + 1, high);
        // cout << cnt << " ";
        merge(array, mid, low, high);
        // cout << tt << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printarray(arr, n);
    cout << endl;
    divide(arr, 0, n - 1);
    printarray(arr, n);
}