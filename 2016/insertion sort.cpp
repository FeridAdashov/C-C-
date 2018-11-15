#include <iostream>
#include <cmath>
#define OLCU 5
using namespace std;

int main()
{
	int massiv[OLCU], i, j;
	
	for(i = 0; i < OLCU; i++)
		cin >> massiv[i];
		
	for(i = 0; i < OLCU; i++)
	{
		j = i;
		while(j > 0 && massiv[j] < massiv[j - 1])
		{
			swap(massiv[j] , massiv[j - 1]);
			j--;
		}
	}
	for(i = 0; i < OLCU; i++)
		cout << massiv[i];
	
	return 0;
}
