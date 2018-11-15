#include <iostream>
#include <cmath>
#define OLCU 5

using namespace std;

int main()
{
	int mas[OLCU], i, j;
	
	cout << "Entered the massive: ";
	for(i = 0; i < OLCU; i++)
		cin >> mas[i];
	for(i = 0; i < OLCU - 1; i++)
	{
		j = i + 1;
		while(j > 0 && mas[j] < mas[j - 1])
		{
			swap(mas[j] , mas[j - 1]);
			j--;
		}
	}
	for(i = 0; i < OLCU; i++)
		cout << mas[i] << " ";
}
