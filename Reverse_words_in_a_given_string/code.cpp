#include<iostream>
#include<conio.h>
#include<sstream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
	string str1, temp ="";
	char c;
	cout << "Enter the string:";
	getline(cin,str1);
	string str2[strlen(str1.c_str())];
	int i = 0, j = 0;
	
	for(i = 0; i < strlen(str1.c_str()); i++)
	{
		while(str1[i] != ' ' && i < strlen(str1.c_str()))
		{
			temp+=(str1[i]);
			i++;
			
		}
		temp+=' ';
		str2[j++] = temp;
		temp = "";
	}
	
	for(i = j - 1; i >= 0; i--)
	{
	    cout<<str2[i];
	}
}
