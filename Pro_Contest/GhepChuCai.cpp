//Ghep chu cai
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
char w[] = {'-', 'G', 'S', 'P', 'V', 'H', 'C', 'U', 'T', 'E'};
unordered_map <char, ll> m;
vector <ll> mark[35];
string s = "*";
ll res, k, x, y;
void dq(){
    for(int c = 1; c <= 9; c ++)
        if(m[w[c]] > 0){
            m[w[c]] --, s.push_back(w[c]);
            y = s.size() - 1;
            if(!mark[s.size() - 1].empty())
            for(auto x : mark[y])
                if(s[x] == s[y]) goto end;
            if(++res == k){ s.erase(0, 1); cout << s; exit(0); }
            dq();end:
            m[w[c]] ++, s.pop_back();
        }
}
void slove(){
    ll g, s, p, v, h, c, u, t, e;
    cin >> g >> s >> p >> v >> h >> c >> u >> t >> e;
    m['G'] = g; m['S'] = s; m['P'] = p; m['V'] = v; m['H'] = h; m['C'] = c; m['U'] = u; m['T'] = t; m['E'] = e;
    sort(w + 1, w + 1 + 9);
    ll tt;
    cin >> tt;
    while(tt --){ cin >> x >> y; if(x > y) swap(x, y); mark[y].push_back(x); }    
    cin >> k;
    dq();
}

signed main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    slove();
    return 0;
}