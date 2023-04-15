#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int ktra(int n)
{
    int i;
	if (n <= 1) return 0;
	if (n <= 3) return 1;
	if (n % 2 == 0 || n % 3 == 0) return 0;
	for(i = 2; i <= sqrt(n); i++)
	if (n % i == 0)	return 0;
	return 1;
}
int main()
{
	char *s;
	int n;
	int NT = 0;
	s = new char [200];
	gets(s);
	for(int i = 0; i < strlen(s); i++)
	{
	    if(s[i] >= '0' && s[i] <= '9')
	    NT = NT * 10 + (s[i] - 48);
	    if(s[i+1] < '0' || s[i+1] > '9')
	        {
	 	        if( ktra(NT) == 1 )
		        cout << NT << "\n";
	            NT = 0;
		    }
	}
	return 0;
}
