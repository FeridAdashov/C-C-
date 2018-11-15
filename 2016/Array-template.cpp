#include <iostream>
using namespace std;

template<class T = int, int n = 1>
class array{
	T ary[n];
public:
	T& operator[](int);
};

template<class T, int n>
T& array<T, n>::operator[](int i){
	if(i < 0 || i >= n)
	printf("Out of index!\n");
	return ary[i];
}


int main()
{
	array<int, 5> ob;
	array<> ob1;
	ob[0] = 7;
	cout << ob[0];
	
	return 0;
}
