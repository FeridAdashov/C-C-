#include<iostream>
using namespace std;

class c {
	int d;
public:
	c() { d = 0; }
	void set(int x) { d = x; }
	void get() { cout << "d = " << d << endl; }
	c& operator++(int);
};

c& c::operator++(int x)
{
	d += x;
	return *this;
}

int main()
{
	class c ob;
	ob.set(4);
	ob.operator++(8);
	ob.get();

	return 0;
}
