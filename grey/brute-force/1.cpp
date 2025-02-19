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
        vector<int> a(n);
        for (int i = 0; i < n - 2; i++)
        {
            cin >> b[i];
        }
        a[0] = 0;
        int glag = 0;
        if (b[0] == 1)
            a[1] = 0;
        else
            a[1] = 1;
        for (int i = 0; i < n - 3; i++)
        {
            if (b[i] == 0 and a[i] == a[i - 1])
            {
                a[i + 1] = a[i] + 1;
            }
            else if (b[i] == 0 and a[i] != a[i - 1])
            {
                a[i + 1] = a[i];
            }
            else if (b[i] == 1 and a[i] == a[i - 1])
            {
                a[i + 1] = a[i];
            }
            else if (b[i] == 1 and a[i] != a[i - 1])
            {
                cout << "NO" << '\n';
                glag = 1;
                break;
            }
        }
        if (glag == 0)
        {
            cout << "YES" << '\n';
        }
    }
}