#include<iostream>
#include<math.h>
#define ll long long
using namespace std;
int main()
{
    ll n, sum = 0;
    cin >> n;
    for(ll i = 1; i < n; i++)
    {
    	if(n % i == 0)
		sum += i;
	}
	if(sum > n) cout << "Yes";
	else cout << "No";
	return 0;
}
