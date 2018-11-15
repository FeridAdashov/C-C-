#include <iostream>
#include <cmath>
#define olcu 5

using namespace std;

int main()
{
	int mas[olcu], i, j, min, acar;
	
	cout << "Entered the massive: ";
	for(i = 0; i < olcu; i++)
		cin >> mas[i];
	for(i = 0; i < olcu; i++)
	{
		min = mas[i];
		acar = i;
		for(j = i + 1; j < olcu; j++)
			if(mas[j] < min)
			{
				min = mas[j];
				acar = j;
			}
		swap(mas[i] , mas[acar]);
	}
	for(i = 0; i < olcu; i++)
	cout << mas[i] << " ";
	return 0;
}
