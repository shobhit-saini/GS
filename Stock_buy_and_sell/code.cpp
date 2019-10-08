#include<iostream>
using namespace std;
struct record
{
	int buy;
	int sell;
};
int main()
{
	int N, i, count = 0;
	cout << "enter the Number of days:";
	cin >> N;
	int sp[N];
	struct record br[N/2 + 1];
	cout << "Enter the stock price of each days:";
	for(i = 0; i < N; i++)
	{
		cin >> sp[i];
	}
	i = 0;
	while(i < N)
	{
		while(i < N-1 && sp[i] >= sp[i+1])
		{
			i++;
		}
		
		br[count].buy = i++;
		
		while(i > 0 && sp[i - 1] <= sp[i])
		{
			i++;
		}
		
		br[count].sell = i-1;
		count++;
	}
	for(i = 0; i < count; i++)
	{
		cout << "(" << br[i].buy << " " << br[i].sell << ")\t"; 
	}
}
