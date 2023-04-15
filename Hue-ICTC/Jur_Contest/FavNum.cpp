#include <bits/stdc++.h>
#define int long long

using namespace std;

bool isSquare(int n)
{
    int sqr = sqrt(n);
    return (sqr * sqr == n);
}

signed main()
{
    ios_base::sync_with_stdio(false);

    int t; cin >> t;
    while(t--)
    {
        int k; cin >> k;
        
        vector<int> ans;
        for(int i = 1; i*i <= k; ++ i)
        {
            if(k%i == 0 && i*i != k && (i + k/i)%2 == 0)
            {
                int b = (i + k/i) / 2;
                int a = (k/i - i) / 2;
                if(b*b - a*a == k)
                    ans.push_back(-b*b), ans.push_back(a*a);
            }
            if(isSquare(k - i*i) && i*i != k)
                ans.push_back(-i*i);
        }
        sort(ans.begin(), ans.end());

        cout << ans.size() << "\n";
        for(auto &i: ans)
            cout << i << " ";
        if(ans.size() > 0) cout << "\n";
    }
}