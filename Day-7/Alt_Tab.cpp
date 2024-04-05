#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int n; 
    cin>>n; 

    vector <string> v;
    map <string, int> mp;  

    for(int i=0; i<n; i++){
        string s; cin>>s;
        v.push_back(s);
    }

    string ans = "";

    for(int i=n-1; i>=0; i--){
        if(mp[v[i]] == 0){
            int sz = v[i].size();
            string w = v[i].substr(sz-2, 2);
            ans +=w;
            mp[v[i]]++;
        }
    }

    cout<<ans<<endl;


    return 0; 
}