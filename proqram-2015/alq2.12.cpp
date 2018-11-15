//ln(1+y) hesabi

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float y, cem = 0, quvvet, isare = 1, deqiqlik;
	
	cout << "Deyiseni daxil et: ";
	cin >> y;
	
	cout << "Hazir funksiya ile alinan netice: " << log(1+y) <<endl; //burada tam deqiqlikle cavab hesablayaq
	
	cout << "Dusturda hansi deqiqlikle hesablayaq: ";
	cin >> deqiqlik;
	
	for(int i = 1; i <= deqiqlik; i++)
	{
		cem = cem + isare * pow(y,i)/i;
		isare = -isare;
	}
	
	cout << "Dusturla alinan netice: " << cem;
	
	return 0;
}
