#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t; cin>>t; 

    while(t--){
        int n; 
        cin>>n; 

        map<int, int> mp; 

        int cnt = 0; 
        for(int i=0; i< (n*n) - n; i++){
            int x; cin>>x; 
            if(cnt == n-1){
                cnt = 0; 
            }
            mp[x] += cnt; 
            cnt++;
        }
        map<int, int> mp2; 
        for(auto x: mp){
            mp2[x.second] = x.first;
        }
        
        for(auto x: mp2){
            cout<<x.second<<" ";
        }
        cout<<endl;

    }
    return 0; 
}