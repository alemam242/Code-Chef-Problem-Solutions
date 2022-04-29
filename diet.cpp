#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0, k, ind = 0, rem = 0;
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            int r = rem + a;
            if (ind == 0 && r < k)
            {
                ind = i;
            }
            else
            {
                count++;
            }
            rem = r - k;
        }
        if (count == n)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO " << ind << endl;
        }
    }
}