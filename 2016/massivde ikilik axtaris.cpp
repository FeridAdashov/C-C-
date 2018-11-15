#include <iostream>
#define OLCU 10
using namespace std;

int main()
{
	int massiv[OLCU], as_serhed, yux_serhed, acar, say = 0;
	for(as_serhed = 0; as_serhed < OLCU; as_serhed++)
	//massiv[as_serhed] = as_serhed * 2;
	cin >> massiv[as_serhed];
	as_serhed  = 0;
	yux_serhed = OLCU - 1;
	
	cout << "Axtarilan elementi gir: ";
	cin >> acar;
	while(as_serhed <= yux_serhed)
	{
		if(acar == massiv[(as_serhed + yux_serhed) / 2])
		{
			cout << "Axtarilan Element " << (as_serhed + yux_serhed) / 2 << " -cidir.\n";
			say++;
			break;
		}
		else if(acar < massiv[(as_serhed + yux_serhed) / 2])
			yux_serhed = (as_serhed + yux_serhed) / 2 - 1;
		else as_serhed = (as_serhed + yux_serhed) / 2 + 1;
	}
	if( say == 0) cout << "Element Tapilmadi...";
	return 0;
}
