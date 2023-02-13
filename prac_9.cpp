// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int temp = 0;
//     int count = 0;
//     int count1 = 0;
//     cin >> n;
//     int *arr = new int[n];
//     int k;
//     // cin>>k;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 // cout<<arr[i]<<" ";
//                 if (temp == arr[j])
//                 {
//                     count1++;
//                     temp = arr[j];
//                     continue;
//                 }
//                 count++;
//             }
//         }
//     }
//     int x = 1;
//     cout << (count - count1 - x) << endl;
//     // cout<<n-count;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, j, t;
//     int k;
//     // int temp = 0;
//     int count = 0;
//     cout << "enter the test case number";
//     cin >> t;
//     // int count1 = 0;
//     for (int l = 0; l < t; l++)
//     {
//         cout << "enter the size of array";
//         cin >> n;
//         int *arr = new int[n];
//         cout << "enter the size of the framing ";
//         cin >> k;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         for (int i = 0; i <= n - k; i++)
//         {
//             count = 0;
//             for (j = 0; j < k; j++)
//             {
//                 int z;
//                 for (z = 0; z < j; z++)
//                 {
//                     if (arr[j] == arr[z])
//                     {
//                         break;
//                     }
//                 }
//                 if (z == j)
//                 {
//                     count++;
//                 }
//             }
//             cout << count;
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n, c;
    cout << "Enter the value of test case:";
    cin >> s;
    int u = 0;
    while (u < s)
    {

        cout << "Enter the size of array:";
        cin >> n;
        int arr[n];
        cout << "Enter the element of array:";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "Enter the size of sliding window:";
        int x;
        cin >> x;
        int y;
        for (int k = 0; k < n - x + 1; k++)
        {
            y = x;
            for (int i = k; i < x + k; i++)
            {
                for (int j = i + 1; j < x + k; j++)
                {
                    if (arr[i] == arr[j])
                    {
                        y--;
                        break;
                    }
                }
            }
            cout << "Distinct value is: " << y << endl;
        }
        u++;
    }
    cout << "\n21DCE052";
    return 0;
}
