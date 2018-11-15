#include<iostream>
using namespace std;
int main(){
	int a,b,min;
	cout<<"iki menfi eded daxil edin: ";
	cin>>a>>b;
	min=(a<b)? a:b;
	if(a+b<min)
	cout<<"ededlerin cemi: "<<a+b<<"\nminumumu: "<<min;
	cout<<"\n"<<a+b<<" < "<<min;
	cout<<"\nteorem ibat olundu...\n";
	system("PAUSE");
}
