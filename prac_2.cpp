// #include <iostream>
// using namespace std;

// int main()
// {
//     int t, n, c, k, sum = 0, count = 0, cnt = 0;
//     cout << "enter the number of test case";
//     cin >> t;
//     cout << "enter the number of the total objects (size of arrays)";
//     cin >> n;
//     int *arr = new int[n];
//     cout << "enter the maximum total weight ";
//     cin >> c;
//     cout << "enter the minimum total weight";
//     cin >> k;
//     cout << "enter the objects(arrays)";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (int i = 0; i < n; i = i + 2)
//     {
//         sum = arr[i] + arr[i + 1];
//         count = 0;
//         if (sum >= k && sum <= c)
//         {
//             count = count + 2;
//             cnt += count;
//         }
//         else
//             continue;
//     }
//     cout << cnt;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, N, K, C, sum = 0, cnt = 0, j;
    cout << "enter the number of test case";
    cin >> T;
    cout << "enter the number of the total objects (size of arrays)";
    cin >> N;
    cout << "enter the maximum total weight ";
    cin >> C;
    cout << "enter the minimum total weight ";
    cin >> K;
    for (int i = 0; i < T; i++)
    {
        int *arr = new int[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        // window
        for (int i = N; i != 0; i--)
        {
            // window sliding
            for (int k = 0; k < N - i + 1; k++)
            {
                sum = 0;
                // sum
                for (j = k; j < i + k; j++)
                {

                    sum = sum + arr[j];
                }
                if (sum <= C && sum >= K)
                {
                    cout << i;
                    break;
                }
            }
            if (sum <= C && sum >= K)
                break;
        }
    }
}