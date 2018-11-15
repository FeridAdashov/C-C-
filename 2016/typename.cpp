#include <iostream>

class A {
public:
	typedef int my_t;
};

template <class T>
class B {
public:
	// T::my_t *ptr; // It will produce compilation error
	typename T::my_t *ptr; // It will output 5
};

int main() {
	B<A> b;
	A::my_t my_int = 5;
	b.ptr = &my_int;
	std::cout << *b.ptr;
	std::cin.ignore();
	return 0;
}
