#include <iostream>
#include <cmath>
using namespace std;

int sade(int n)
{
	int i;
	for(i = 2; i < (int)sqrt(n) + 1; i++)
		if(n % i == 0) break;
	if(i == (int)sqrt(n) + 1) return 1;
	else return 0;
}

int main()
{
	for(int i = 1; i < 50; i++)
	cout << i << " -> " << sade(i) << "\n";
	
	
	return 0;
}
