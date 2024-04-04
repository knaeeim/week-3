#include <bits/stdc++.h>
using namespace std;
#define ll long long

// bool cmp(const pair<int, int> &a, const pair<int, int> &b){
//     return a.first > b.first;
// }

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

        vector <pair<int, int>> v; 
        vector <pair<int, int>> v1; 
        vector <pair<int, int>> v2; 

        for (int i = 0; i < n; i++)
        {
            int x; 
            cin>>x; 
            v.push_back({x, i});
        }

        for (int i = 0; i < n; i++)
        {
            int x; 
            cin>>x; 
            v1.push_back({x, i});
        }

        for (int i = 0; i < n; i++)
        {
            int x; 
            cin>>x; 
            v2.push_back({x, i});
        }

        sort(v.begin(), v.end(), greater<pair<int, int>>());
        sort(v1.begin(), v1.end(), greater<pair<int, int>>());
        sort(v2.begin(), v2.end(), greater<pair<int, int>>());

        ll mx = INT_MIN; 

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                for(int k =0; k<3; k++){
                    if(v[i].second != v1[j].second and v[i].second != v2[k].second and v1[j].second != v2[k].second){
                        ll sum = v[i].first + v1[j].first + v2[k].first;
                        mx = max(mx, sum);
                    }
                }
            }
        }

        cout<<mx<<endl;

        
    }
    return 0;
}