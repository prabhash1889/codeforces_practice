#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> b(n - 2);
        for (int i = 0; i < n - 2; ++i)
        {
            cin >> b[i];
        }
        // for (int i = 0; i < n - 2; i++)
        // {
        //     cout << b[i] << '\n';
        // }
        int flag = 0;
        if (n > 3)
        {
            for (int i = 1; i < n - 3; ++i)
            {
                if (b[i] == 0 and b[i - 1] == 1 and b[i + 1] == 1)
                {
                    cout << "NO" << '\n';
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "YES" << '\n';
            }
        }
        else
        {
            cout << "YES" << '\n';
        }
    }
}