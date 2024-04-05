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
        string a, b;
        cin >> a >> b;

        char ca = a.back();
        char cb = b.back();

        if (ca == cb)
        {

            if (a.size() == b.size())
            {
                cout << '=' << endl;
            }
            else if (ca == 'S')
            {
                if (a.size() < b.size())
                {
                    cout << '>' << endl;
                }
                else cout<<'<'<<endl;
            }
            else
            {
                if(a.size() < b.size()){
                    cout<<'<'<<endl;
                }
                else cout<<'>'<<endl;
            }
        }
        else
        {
            if (ca < cb)
            {
                cout << '>' << endl;
            }
            else
                cout << '<' << endl;
        }
    }
    return 0;
}

/*
void solve() {
    string a,b; cin >> a >> b;
    char ca = a.back();
    char cb = b.back();
    if (ca == cb) {
        if (sz(a) == sz(b)) cout << '=';
        else if (ca == 'S') {
            cout << (sz(a) < sz(b) ? '>' : '<');
        } else {
            cout << (sz(a) < sz(b) ? '<' : '>');
        }
    }else cout << (ca < cb ? '>' : '<');
    cout << '\n';
}
*/