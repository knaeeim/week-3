#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> v(n, vector<int>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }

        int mx = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int now = 0;
                int ci = i, cj = j;

                while (ci >= 0 and ci < n and cj >= 0 and cj < m)
                {
                    now += v[ci][cj];
                    ci--;
                    cj--;
                }

                ci = i, cj = j;
                while (ci >= 0 and ci < n and cj >= 0 and cj < m)
                {
                    now += v[ci][cj];
                    ci++;
                    cj--;
                }

                ci = i, cj = j; 
                while (ci >= 0 and ci < n and cj >= 0 and cj < m)
                {
                    now += v[ci][cj];
                    ci--;
                    cj++;
                }

                ci = i, cj = j; 
                while (ci >= 0 and ci < n and cj >= 0 and cj < m)
                {
                    now += v[ci][cj];
                    ci++;
                    cj++;
                }
                now -= v[i][j] * 3;
                mx = max(mx, now);
            }
        }

        cout<<mx<<endl;
    }
    return 0;
}