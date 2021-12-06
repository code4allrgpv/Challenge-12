#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void checkAns(string str)
{

    string newstr;
    int x;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != 'H' && str[i] != 'O' && str[i] != 'L' && str[i] != 'A' && str[i] != 'P' && str[i] != 'B' && str[i] != 'E' && str[i] != 'T' && str[i] != 'I' && str[i] != 'C')
        {
            newstr += string(1, str[i]);

            x++;
        }
    }
    cout << newstr << endl;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int m, n;
    char str[10][1000];

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> str[i];
    }

    for (int i = 0; i < m; i++)
    {
        checkAns(str[i]);
    }

    return 0;
}
