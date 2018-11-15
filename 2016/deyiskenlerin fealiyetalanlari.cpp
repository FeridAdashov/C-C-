#include <iostream>
using namespace std;

namespace
{
	int b = 9;
}

int a = 5;

int main()
{
	int a = 7, b = 3;
	cout << "Local: " << a << endl;
	cout << "Global: " << ::a << endl;
	{
		int a = 8;
		cout << "Ikinci blok daxilinde : " << a << endl;
	}
	cout << "Blokdan sonraki deyer: " << a << endl;
	cout << "Global namespace blokunun daxilinde b = " << ::b;
	return 0;
}
