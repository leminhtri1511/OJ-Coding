#include<iostream>
//#include<bits/stdc++.h>
//#include<math.h>
using namespace std;
int main()
{
	long days, months, years;
	int songay;
	cin >> songay;
	years = songay / 365;
	days = (songay % 365) % 30;
	months = (songay % 365) / 30;
	if(years > 0) cout << years << " years" << endl;
	if(months > 0) cout << months << " months" << endl;
	if(days > 0) cout << days << " days";
	return 0;
}
