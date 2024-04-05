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
        int n;
        cin >> n;

        vector<int> v(n);

        ll sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += abs(v[i]);
        }

        ll l = 0, r = 0, ans = 0;


        while (r < n)
        {
            if (v[r] < 0)
            {
                ans++;
                while(r < n and v[r] <= 0){
                    r++;
                }
            }
            r++;
        }
        
        cout << sum << " " << ans << endl;
    }
    return 0;
}