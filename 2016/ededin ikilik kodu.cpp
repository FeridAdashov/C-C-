#include <iostream>
using namespace std;

int main()
{	
	int a, i;
	//birinci usul
	cin >> a;
	for(i = 128; i > 0; i /= 2)
		if((a & i) == 0) cout << '0';
		else cout << '1';
		
		cout << "\n\n";
		
	//ikinci usul
	for(i = 31; i >= 0; i--)
	{
		((a >> i) % 2) ? cout << '1' : cout << '0';
		if( !(i % 8) ) cout << endl;
	}
	return 0;	
}
