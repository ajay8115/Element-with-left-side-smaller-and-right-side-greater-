// CODE BY : AJAY PAL , IIT (BHU)
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

int findElement(int a[], int n)
{
    int l[n];
    int r[n];

    int maxi = a[0];
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, a[i]);
        l[i] = maxi;
    }

    int mini = a[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {

        mini = min(mini, a[i]);
        r[i] = mini;
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] >= l[i - 1] and a[i] <= r[i + 1])
        {
            return a[i];
        }
    }

    return -1;
}
