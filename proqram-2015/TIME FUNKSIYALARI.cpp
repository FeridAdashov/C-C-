#include<iostream>
#include<time.h>
using namespace std;
int main(){int i;
	time_t x;
	x=clock();
	for(i=0;i<10000;i++)
	cout<<"hey!\n";
	cout<<(clock()-x)/(double)CLOCKS_PER_SEC;
	return 0;
}
