#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        vector<long long int>v;
        long long int cnt = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == 'L'){
                if((n-1) - i > i){
                    cnt++;
                    sum += (n-1) - i;
                    v.push_back(((n-1) - i) - i);
                }else {
                    sum += i;
                }
            }else if(s[i] == 'R'){
                if(i > (n-1) - i){
                    cnt++;
                    sum += i;
                    v.push_back(i - ((n-1) - i));
                }else {
                    sum += (n-1) - i;
                }
            }
        }

        vector<long long>ans(n+1);
        for (int i = cnt; i <= n; i++) ans[i] = sum;

        sort(v.begin(), v.end(), greater<int>());
        for (int i = cnt-1; i >= 1; i--)
        {
            sum -= v.back();
            v.pop_back();
            ans[i] = sum;
        }

        for (int i = 1; i <= n; i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}