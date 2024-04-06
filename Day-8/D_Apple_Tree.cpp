#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<vector<int>> graph;
vector<int> value;

int dfs(int src, int des)
{
    int count = 0;
    for (auto child : graph[src]){
        if (child != des){
            count += dfs(child, src);
        }
    }

    if (count == 0 and graph[src].size() == 1){
        count++;
    }

    value[src] = count;
    return count;
}

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

        graph.resize(n + 1);
        value.resize(n + 1, 0);

        for (int i = 0; i < n-1; i++){
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        dfs(1, 1);

        int q;
        cin >> q;

        for(int i=0; i<q; i++){
            int a, b;
            cin >> a >> b;

            ll ans = ((1LL * value[a]) * (1LL*value[b]));

            cout << ans << endl;
        }

        graph.clear();
        value.clear();
    }

    return 0;
}