#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
void InHoa(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        if (s[i - 1] == ' ' || i == 0)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
        }
        
    }
}
int main()
{
    char s[100];
    while ( gets(s) )
    {
	InHoa(s);
    cout << s << endl;
    
	}
}
