#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m = 0;
        cin >> n;
        string s;
        cin >> s;
        char str[n];
        bool res = true;
        for (int i = 0; i < n; i++)
        {
            bool flag = false;
            int tm = m;
            int count = 1;
            while (tm--)
            {
                if (s[i] == str[tm])
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
            {
                continue;
            }
            else
            {
                str[m++] = s[i];
                for (int j = i + 1; j < n; j++)
                {
                    if (s[i] == s[j])
                    {
                        count++;
                    }
                }
                if (count % 2 != 0)
                {
                    res = false;
                    break;
                }
            }
        }
        if (res)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
