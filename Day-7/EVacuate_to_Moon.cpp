#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t; cin>>t; 

    while(t--){
        ll n, m, h; 
        cin>>n>>m>>h;

        vector <ll> car(n); 
        vector <ll> outlet(m); 

        for(int i=0; i<n; i++) cin>>car[i];
        for(int i=0; i<m; i++) cin>>outlet[i];

        sort(car.rbegin(), car.rend());
        sort(outlet.rbegin(), outlet.rend());
        
        ll ans = 0; 

        for(int i=0, j=0; i<n && j<m; i++,j++){
            ans += min({car[i], h*outlet[j]});
        }

        cout<<ans<<endl;
    }
    return 0; 
}