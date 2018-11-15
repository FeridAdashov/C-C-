#include<iostream>
using namespace std;
int main(){
	unsigned x,y;
	int a,b;
	cout<<"Iki eded daxil et: ";
	cin>>x>>y; //x=53(110101) & y=27(011011)=17(010001)
	cout<<"Mentiqi vurma konyuksiya = "<<(x&y)<<endl;
	cout<<"Iki eded daxil et: ";
	cin>>x>>y; //x=53(110101) ^ y=27(011011)=46(101110)
	cout<<"\nMentiqi toplama(mod 2)="<<(x^y)<<endl;
	cout<<"Iki eded daxil et: ";
	cin>>x>>y; //x=36(100100) | y=10(001010)=46(101110)
	cout<<"\nDizyunksiya="<<(x|y);
	return 0;
}
