#include <iostream>
#define n 5
using namespace std;

int main()
{
	int t;
	int a[n], max = INT_MIN, min = INT_MAX, say1 = 0, say2 = 0;
	
	for(int i = 0; i < n; i++)
	cin >> a[i];
	
	for(int i = 0; i < n; i++)
	{
		if(a[i] >= max)
		{
			if(a[i] > max)
				say1 = 0;
			max = a[i];
			say1++;
		}
		if(a[i] <= min)
		{
			if(a[i] < min)
				say2 = 0;
			min = a[i];
			say2++;
		}
	}
		cout << say1 + say2;
	return 0;
}
