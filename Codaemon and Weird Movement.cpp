#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t > 0)
    {
        long double x, n, i, sum = 0;
        cin >> x >> n;
        if (fmod(n, 4) == 0)
        {
            sum = 0;
        }
        else if (fmod(n, 4) == 1)
        {
            sum = (-n);
        }
        else if (fmod(n, 4) == 2)
        {
            sum = 1;
        }
        else if (fmod(n, 4) == 3)
        {
            sum = n + 1;
        }
        if (fmod(x, 2) == 0)
        {
            x = (x + sum);
        }
        else
        {
            x = (x - sum);
        }
        cout <<fixed << setprecision(0) << x << endl;
        t--;
    }

    return 0;
}
