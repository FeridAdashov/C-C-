#include <bits/stdc++.h>
using namespace std;
#include "Eyler.h"
#include "Simmetrik_Sxem.h"
#include "Runqe_Kutto.h"

int main()
{
	int t;
	cout << "Hansi usulla hesablama aparilsin? " << 
			 "(1 - Eyler, 2 - Simmetrik Sxem, 3 - Runqe Kutto) ";
	cin >> t;

	switch(t)
	{
		case 1:
			eyler();
		break;	
		
		case 2:
			simmetrik_sxem();
		break;
		
		case 3:
			runqe_kutto();
		break;	
	}
	system("pause");
	return 0;
}
