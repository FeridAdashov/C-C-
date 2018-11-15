//Ededin reqemleri sayini rekursiya ile tapmaq

#include <iostream>
using namespace std;

int reqemsayi(int n)
{
	int say = 1;
	
	if(n <= 10) return say;
	return say + (reqemsayi(n/10));
	
}

int main()
{
	long double eded;
	cout << "Ededi daxil edin: ";
	cin >> eded;
	cout << eded << " ededinin reqem sayi " << reqemsayi(eded);
	return 0;
}
