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
        // int n;
        // cin >> n;
        // string s;
        // cin >> s;
        // vector<int> v;
        // array<int, 26> cnt{};
        // for (int i = 0; i < n; i++)
        // {
        //     if (cnt[s[i] - 'a'] == 0)
        //     {
        //         v.push_back(i);
        //     }
        //     else
        //         cnt[s[i] - 'a']++;
        // }
        // int64_t ans = 0;
        // for (int i = 0; i < v.size(); i++)
        // {
        //     ans += (n - v[i]);
        // }
        // cout << ans << '\n';
        int n;
        cin >> n;
        string s;
        cin >> s;
        array<int, 26> cnt{};
        int dist = 0, ans = 0;
        for (auto c : s)
        {
            dist += cnt[c - 'a']++ == 0;
            // cout << dist << '\n';
            ans += dist;
        }
        cout << ans << '\n';
    }
}