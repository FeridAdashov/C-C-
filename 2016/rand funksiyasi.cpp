#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int a, b, c, xal;
	
	srand(time(NULL));
	while(true)
	{
		a = rand() % 10;
		b = rand() % 10;
		cout << a << " * " << b << " = ";
		cin >> c;
		if( a * b == c) cout << "\nDogru cavab!\n\n";
		else cout << "\nYanlis!\n\n";
	}
	
	return 0;
}
