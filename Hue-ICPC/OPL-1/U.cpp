#include<bits/stdc++.h>
using namespace std;

typedef long long i64;

const i64 Mod = 1e9 + 7;
void solve() 
{  
    int n, m;
    cin >> n >> m;
    vector<int> cnt(n + 1);
    for(int i = 0; i < m; i++) 
    {
        int x, y;
        cin >> x >> y;
        cnt[x]++;
        cnt[y]++;
    }
    int c = 0;
    for(int i = 1; i <= n; i++)
        c += min(cnt[i], 2);
    cout << (n * 2 - c + 1) / 2;
}
int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
} 