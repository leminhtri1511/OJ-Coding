#include <iostream>
#include <math.h>
using namespace std;
//bool check(int n, int a[])
//{
//	for( int i = 0; i < n; i++ )
//	{
////	int max = a[0];
//		if( a[i] <= a[i + 1] && a[n - 1] >= a[i]) return 1;
//		else return 0;break;
//	}
//}
bool check(int a[], int n) 
{
    int dem = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (a[i + 1] >= a[i]) dem++;
    }
    if (dem == n - 1) return true;
    else return false;
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	for ( int i = 0; i < n; i++ ) cin >> a[i];
//  int max = a[0];
	if ( check(a, n) == 1  ) cout << "Yes";
	else cout << "No";	
	return 0;
}
