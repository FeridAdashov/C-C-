#include<iostream>
using namespace std;
class dey{
	int x;
	public:
		void yaz(int);
		int cap();
	
};

void dey::yaz(int t){
	x=t;
}

int dey::cap(){
	return x;
}

int main(){
dey a;
a.yaz(5);
cout<<a.cap();
	return 0;
}
