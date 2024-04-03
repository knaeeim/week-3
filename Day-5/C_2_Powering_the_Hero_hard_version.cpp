#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t; cin>>t;

    while(t--){
        int n; cin>>n; 

        vector <ll> v(n);
        priority_queue <ll> pq;  

        ll ans = 0;
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(v[i] != 0){
                pq.push(v[i]);
            }
            else if(v[i] == 0 and !pq.empty()){
                ans +=pq.top();
                pq.pop();
            }
        }

        cout<<ans<<endl;

    } 
    return 0; 
}