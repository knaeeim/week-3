#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t; cin>>t; 

    while (t--)
    {
        int n; 
        cin>>n; 

        vector <int> v(n); 

        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        if(v.size() == 1){
            cout<<0<<endl;
        }
        else{
            int ans = v[n-1] - v[0];

            for(int i=1; i<=n-1; i++){
                ans = max(ans, v[i] - v[0]);
            } 

            for(int i=1; i<=n-2; i++){
                ans = max(ans, v[n-1] - v[i]);
            }

            for(int i=1; i<=n-1; i++){
                ans = max(ans, v[i-1] - v[i]);
            }

            cout<<ans<<endl;
        }
    }
    
    return 0; 
}