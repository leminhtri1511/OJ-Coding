#include <bits/stdc++.h>
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void solve() 
{
    int n,m, ans = 1e18;
    cin >> n >> m;
    int x[n], y[n];
    for(int i=1; i<=n; i++) cin >> x[i] >> y[i];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) 
        {
            int a = x[i]+1, b = y[j]+1;
            int check1 = 0, check2 = 0, check3 = 0, check4 = 0;
            for(int k = 1; k <= n; k++)
                if(x[k] < a)
                    if(y[k] < b) check3++; 
                    else check1++;
                else 
                {
                    if(y[k]<b) check4++; 
                    else check2++;
                }
            ans = min(ans,max(max(check1, check2), max(check3, check4)));
        }
    cout << ans << endl;
}


int main() 
{
    sync;
    int T; 
    cin >> T;
    while(T--) solve();
    return 0;
}