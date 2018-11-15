//kok 95 + kok 95 +...+

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float cem = 0;
	
	for(int i = 5; i <= 95; i += 5)
		cem = sqrt(i + cem);
		
	cout << "Bu cem = " << cem;
	return 0;
}
