//Ededin bolenleri ve bu bolenlerin ededi ortasi

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int n, cem = 0, say = 0;
	cout << "Ededi daxil et: ";
	cin >> n;
	cout << "Bu ededin bolenleri: ";
	
	for(int i = 1; i <= n; i++)
		if(n%i == 0)
		{
			cout << i <<" ";
			cem+=i;
			say++;
		}
	cout << "\nBu bolenlerin ededi ortasi: " << (float)cem/say;
	
	return 0;
}
