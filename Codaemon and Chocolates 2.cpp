 
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int l, r, k;
        cin >> l >> r >> k;
        int sum = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {

            if ((sum + arr[i]) <= k && arr[i] <= r && arr[i] >= l)
            {
                count++;
                sum += arr[i];
            }
        }
        cout << count << endl;
    }
    return 0;
}
   
