#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	stringstream setr1;
	string setr2 = "50";
	int a, b, c;
	
	setr1 << 200 << " " << 300;
	setr1 >> a;
	cout << a;
	stringstream(setr2) >> c;
	cout << a + b +c;	
	//CAVAB 550 OLUR (YOXLANIB :-) )
	return 0;
}
