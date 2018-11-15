#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main(){
	srand(time(NULL));
	for(int i=0;i<10;i++)
	cout<<rand()%100<<"  ";
	return 0;
}
