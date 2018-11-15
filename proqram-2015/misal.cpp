
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float x,y,k;
	int s,i;
	cout<<"musbet eded daxil et: ";
	cin>>x;
	cout<<"1-den boyuk eded daxil et: ";
	cin>>y;
    i=log10(x)/log10(y);
    cout<<i+1<<"  "<<i-1;
	return 0;
}
