#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string str;
	cout << "Enter the string:";
	cin >> str;
	int count[256], i = 0;
	for(i = 0; i < strlen(str.c_str()); i++)
	{
		count[str[i]]++;
	}
	
	for(i = 0; i <= strlen(str.c_str()); i++)
	{
		cout << str[i] << ":" << count[str[i]];
		if(count[str[i]] == 1)
		{	
			cout << str[i];
			exit(0);
		}
	}
	cout << "Every element is repeated more than once";
	
	return 0;
}
