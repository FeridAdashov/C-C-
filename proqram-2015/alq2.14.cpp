//Ededin ikilikdeki 0 ve 1 lerinin sayi 

#include <iostream>
using namespace std;

int main()
{
	int eded, i, say0 = 0, say1 = 0;
	cout << "Ededi daxil et: ";
	cin >> eded;
	cout << "Buededin ikilikde tesviri ve 0 , 1 lerin sayi(32 bit):\n";
	
	for(int i = 31; i >= 0; i--)
	{
		if((eded >> i)%2)
		{
			cout << '1';
			say1++;
		}
		else
		{
			cout << '0';
			say0++;
		}
		if(i%8 == 0) cout << endl;
	}
	
	cout << "\nSifirlarin sayi: " << say0 << endl << "Birlerin sayi: " << say1;
	
	return 0;
}

