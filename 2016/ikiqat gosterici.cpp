#include <iostream>
using namespace std;

int main()
{
	int a = 7, *p, **q, *z;
	p = &a;
	q = &p;
	
	cout << p << endl << &a << endl << q << endl << **q;
	
	return 0;
}
