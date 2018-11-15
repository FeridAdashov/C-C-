//Ededdeki muxtelif reqemlerin sayini tapmaq

#include <iostream>
using namespace std;

int main()
{
	int eded, i, n = 0, j, say = 0;
	
	cout << "Ededi daxil et: ";
	cin >> eded;
	i = eded;
	
	while( i > 0 )
	{
		n++;
		i /= 10;
	}
	
	int a[n];
	n = 0;
	while( eded > 0 )
	{
		a[n] = eded % 10;
		eded /= 10;
		n++;
	}
	
	for(i = 0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
			if( a[i] == a[j]) break;
		if(j == n) say++;
	}
	
	cout << say;
	
	return 0;
}
