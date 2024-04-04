#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t; cin>>t; 

    while(t--){
        int n, k, q; 
        cin>>n>>k>>q; 

        int a[n]; 
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        ll r=0, ans = 0, cnt =0;

        while(r < n){
            while(a[r] <= q and r < n){
                cnt++;
                r++;
                if(cnt >= k){
                    ans +=(cnt - k) + 1;
                }
            }
            cnt = 0; 
            r++;
        }

        cout<<ans<<endl;
    }
    return 0; 
}