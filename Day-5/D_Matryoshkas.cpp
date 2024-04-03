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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for(int i=0; i<n; i++){
            int value = v[i]; 
            // cout<<"value from for loop "<<value<<endl;
            if(mp[v[i]] != 0){
                ans++;
                // cout<<"count "<<"--> "<<ans<<endl;
                while(mp[value] > 0){
                    mp[value]--;
                    value++;
                    // cout<<"Value from while "<<value<<endl;
                }
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}