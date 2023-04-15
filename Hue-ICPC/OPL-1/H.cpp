#include <bits/stdc++.h>
using namespace std;
long long C(int n, int k) 
{
    long long res = 1;
    for (int i = 1; i <= k; i++)
        res = res * (n - k + i) / i;
    return res;
}

int main() 
{
    int T;
    cin >> T;
    while (T--) 
    {
        int N, K;
        cin >> N >> K;
        cout << C(N + K - 1, N - 1) << endl;
    }
    return 0;
}