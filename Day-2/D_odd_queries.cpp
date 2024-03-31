#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long a[200005], prefix[200005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n, q;
        cin >> n >> q;

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            prefix[i] = prefix[i - 1];
            prefix[i] += a[i];
        }

        for(int i=0; i<=n; i++){
            cout<<prefix[i]<<" ";
        }
        cout<<endl;

        while(q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;

            ll ans = prefix[n] - (prefix[r] - prefix[l-1]) + k *( r- l +1); 

            if(ans%2==1) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}