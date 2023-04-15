#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        int count = 1;
        for(int i = 0; i < s.size(); i++)
        if(s[i] >= 'A' and s[i] <= 'Z') count ++;
        cout << count << endl;
    }
}
//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;
//int check (char *s)
//{
//	int i, count = 1;
//	for (i = 0; i < strlen(s); i++)
//	{
//		if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
//		{
//			if (s[i] >= 'A' && s[i] <= 'Z') count ++;
//		}
//	}
//	return dem;
//}
//int main()
//{
//    char s[501];
//	while( gets(s) )
//	{
//		cout << check(s) << endl;
//	}
//    return 0;
//}
