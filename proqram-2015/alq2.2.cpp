//5 reqemli ededde ortadaki reqemi qonsu reqemlerin cemi ile evez etmek

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int eded, cem, qaliq, i = 0;
	
	cout << "Ededi daxil et: ";
	cin >> eded;
	
	cem = (eded/10)%10 + (eded/1000)%10;
	if(cem > 10) i++;
	qaliq = eded % 1000;
	eded = (eded - qaliq) * pow(10,i) + cem * 100 + qaliq % 100;
	 
	cout << "Yeni eded = " << eded;
	
	return 0;
}
