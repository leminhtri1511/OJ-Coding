//Thi sinh HaNoi
#include <bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<lli, lli>;
const int N = 1e5 + 7;
const int MOD = 998244353;
const lli INF = 1e18 + 7;
int numNode, numAdd, numVi, numVisit;
vector<pii> adj[N];

void readInput() {
	cin >> numNode >> numVi >> numAdd;
	for (int i = 1; i <= numVi; i++) {
		int n, dis; cin >> n >> dis;
		vector<int> tmp;
		for (int j = 1; j <= n; j++) {
			int node; cin >> node;
			tmp.push_back(node);
		}
		for (auto u: tmp)
			for (auto v: tmp)
				if (u != v) adj[u].push_back(make_pair(v, dis));
	}
	for (int i = 1; i <= numAdd; i++) {
		int u, v, w; cin >> u >> v >> w;
		adj[u].push_back(make_pair(v, w));
		adj[v].push_back(make_pair(u, v));
	}
	cin >> numVisit;
}

lli ans[N];

void dijisktra(int root) {
	priority_queue<pii, vector<pii>, greater<pii>> heap;
    heap.push(make_pair(0, root));
    vector<lli> f;
    f.assign(numNode + 1, INF);
    f[root] = 0;
    while (!heap.empty()) {
        lli u = heap.top().second, val = heap.top().first; heap.pop();
        if (f[u] < val) continue;
        for (auto node: adj[u]) {
            lli v = node.first, val = node.second;
            if (f[v] > f[u] + val) {
                f[v] = f[u] + val;
                heap.push(make_pair(f[v], v));
            }
        }
    }
    lli tmp = 1;
    for (int i = 1; i <= root; i++) tmp = tmp * root % MOD;
    for (int i = 1; i <= numNode; i++) {
    	ans[i] = ans[i] + f[i] * tmp % MOD;
    	ans[i] %= MOD;
    }
}

void solve() {
	for (int i = 1; i <= numVisit; i++) {
		dijisktra(i);
	}
	for (int i = 1; i <= numNode; i++)
		cout << ans[i] << " ";
}

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	readInput();
	solve();
	return 0;
}