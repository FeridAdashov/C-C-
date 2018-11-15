//Verilen N ededinin sade olub olmadigini yoxlamaq

#include <iostream>
using namespace std;

int sade(int n)
{	int i;
	for(i = 2; i<n; i++)
	if(n%i == 0) break;
	if(i == n) return 1;
	else return 0;
}

int main()
{
	int N;
	cout << "Ededi daxil et: ";
	cin >>N;
	
	if(sade(N) == 1) cout << "Bu eded sade ededdir.\n";
	else cout << "Bu eded sade eded deyil.\n";
	
	return 0;
}
