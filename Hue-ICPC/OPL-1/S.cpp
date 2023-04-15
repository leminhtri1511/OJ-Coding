#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void Solve () 
{
    int A, B;
    cin >> A >> B;
    for (int i = 1; i <= B; i++) 
    {
        ll x = i;
        vector<ll> ans;
        while (x != 0) 
        {
            ans.push_back (x % 10);
            x /= 10;
        }
        for (auto x : ans)
            cout << char (x + 'a');
        cout << ' ';
    }
}

int main () 
{
    ios_base::sync_with_stdio (false); cin.tie(0); cout.tie(0);
    int cas = 1;
    // cin >> cas;
    while (cas--) Solve ();
    return 0;
}