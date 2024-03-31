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

        string s;
        cin >> s;

        string cmp = "meow";

        for(int i=0; i<n; i++){
            if(s[i] <= 90) s[i]+=32; 
        }

        string  ans = "";
            
        for(int i=0; i<n; i++){
           if(ans.empty() or ans.back() != s[i]){
                ans.push_back(s[i]);
           }
        }

        if(ans == cmp) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}