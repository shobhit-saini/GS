#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<int, int> mp1;
	map<int, int> mp2;
	int n1, n2;
	cout << "Enter the size of first array:";
	cin >> n1;
	cout <<"Enter the size of second array:";
	cin >> n2;
	if(n1 != n2)
	{
		cout << "Arrays are not equal";
		exit(0);
	}
	int ar[n1] = {0}, i = 0;
	cout << "Enter the elements of first array:\n";
	for(i = 0; i < n1; i++)
	{
		cin >> ar[i];
		mp1[ar[i]]++;
	}	
	
	cout<< "Enter the elements of second array:\n";
	for(i = 0; i < n2; i++)
	{
		cin >> ar[i];
		mp2[ar[i]]++;
	}
	
	map<int, int>::iterator it1;
	map<int, int>::iterator it2;
	for(it1 = mp1.begin(), it2 = mp2.begin(); it1 != mp1.end(); it1++,it2++)
	{
		if((it1->first != it2->first) || (it1->second != it2->second))
		{
			cout << "Arrays are not equal";
			exit(0);
		}
		
	}
	cout << "Arrays are equal";
	return 0;
}
