#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
#define int long long
#define setpre(a) fixed<<setprecision(a)
void online_judge() 
{
    #ifndef ONLINE_JUDGE
        freopen("input.inp","r",stdin);freopen("output.out","w",stdout);
    #endif
}
const int N = 1e5 + 1;

int n;
int trai[N], phai[N];

int max_trai, max_phai;

bool ktra() 
{
    for (int i = 1; i <= n; i++) if (trai[i] == max_trai && phai[i] == max_phai) return false;
    return true;
}

signed main()
{
    faster
    //online_judge();
    
    cin >> n;
    for (int i = 1; i <= n; i++) 
    {
        cin >> trai[i] >> phai[i];
        max_trai = max(trai[i], max_trai);
        max_phai = max(phai[i], max_phai);
    }
    if (ktra()) cout << max_trai + max_phai;
    else 
    {
        sort(trai + 1, trai + 1 + n, greater<int>());
        int a = trai[2];
        sort(phai + 1, phai + 1 + n, greater<int>());
        int b = phai[2];
        cout << max(max_trai + b, max_phai + a);
    }
}