//Printing ASCII table in C++

#include <iostream>
using namespace std;
int main()
{
	int i = -1;
	
	while(++i < 256)
		cout << i << "---" << char(i) << endl;
	
	return 0;
}
