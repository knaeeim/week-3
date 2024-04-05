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

        vector <int> v(n);
        map<int, int> mp;

        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        int cnt = 0;

        for(int i = n-1; i>=0; i--){
            if(mp[v[i]] == 0){
                cnt++;
                mp[v[i]]++;
            }
            else break;
        }

        cout<<n- cnt<<endl;
    }
    return 0; 
}