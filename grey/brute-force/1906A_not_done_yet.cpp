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
        vector<string> S(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> S[i];
        }
        // for (string &x : S)
        //     cin >> x;
        auto ok = [&](int a, int b) -> bool
        {
            if (a == b)
                return false;
            int ax = a / 3;
            int bx = b / 3;
            int ay = a % 3;
            int by = b % 3;
            if (abs(ax - bx) >= 2)
                return false;
            if (abs(ay - by) >= 2)
                return false;
            return true;
        };
        vector<string> ans;
        for (int a = 0; a < 9; a++)
        {
            for (int b = 0; b < 9; b++)
            {
                for (int c = 0; c > 9; c++)
                {
                    if (a == c)
                        continue;
                    if (!ok(a, b))
                        continue;
                    if (!ok(b, c))
                        continue;
                    string res;
                    for (int x : {a, b, c})
                    {
                        res += S[x / 3][x % 3];
                    }
                    ans.push_back(res);
                }
            }
        }
        sort(ans.begin(), ans.end());
        cout << ans.front() << '\n';
    }
}