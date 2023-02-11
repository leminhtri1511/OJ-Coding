#include <bits/stdc++.h>
using namespace std;
int T;
int main()
{
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        int n, a[105], b[105];
        cin >> n;
        for (int j = 1; j<=n; j++)  cin >> a[j];
        for (int j = 1; j<=n; j++)  cin >> b[j];
        sort(a+1, a+n+1);
        sort(b+1, b+n+1);
        //for (int j = 1; j<=n; j++)  cout<<a[j]<<" "<<b[j]<<'\n';
        int k = 0;
        for (int j = 1; j<=n; j++)
        if (a[j] > b[j])
        {
            cout << "No"<<'\n'; 
            k = 1; 
            break;   
        }
        if (k == 0)   
            cout << "Yes"<<'\n';
    }
}