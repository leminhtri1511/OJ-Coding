#include<bits/stdc++.h>
long a[100];
using namespace std;
int main()
{
    long long t, e, s, i, j;
    cin >> t;
    for(i = 1;i <= t;++i)
        {
            memset(a, 0, sizeof(a));
            cin >> e >> s;
            a[e] = 1;
            a[e+1] = 1;
            a[e+2] = 2;
            for(j = e+3; j<= s; ++j)
                 a[j]=a[j-1]+a[j-2]+a[j-3];
            cout << a[s] << endl;
        }
}