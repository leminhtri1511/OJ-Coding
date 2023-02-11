#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	while(getline(cin , s) )
	{
        int count = 0;
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'i' || s[i] == 'e' || s[i] == 'u'||           
			   s[i] == 'A' || s[i] == 'O' || s[i] == 'Y' || s[i] == 'I' || s[i] == 'E' || s[i] == 'U')
			count ++;
		}
		cout << count << endl;
	}
	return 0;
}
