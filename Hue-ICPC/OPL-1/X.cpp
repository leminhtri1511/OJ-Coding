#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    i64 p, q;
    cin >> p >> q;  
    cout << (p * (q - 1) - (q - 1)) / 2;

    return 0;
}