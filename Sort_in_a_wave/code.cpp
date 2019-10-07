#include<iostream>
using namespace std;
int swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int n1, i;
	cout << "Enter the size of an array:";
	cin >> n1;
	int ar[n1];
	cout << "Enter the elements in array:\n";
	for(i = 0; i < n1; i++)
	{
		cin >> ar[i];
	}
	for(i = 0; i < n1; i += 2)
	{
		if(i > 0 && ar[i-1] > ar[i])
		{
			swap(&ar[i-1], &ar[i]);
		}
		if(i < n1-1 && ar[i] < ar[i+1])
		{
			swap(&ar[i], &ar[i+1]);
		}
	}
	cout << "Sorted wave array:";
	for(i = 0; i < n1; i++)
	{
		cout << ar[i] << "\t";
	}
}
