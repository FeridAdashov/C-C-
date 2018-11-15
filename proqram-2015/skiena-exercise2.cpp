#include<iostream>
using namespace std;
int main(){
	int a,b,min;
	cout<<"menfi eded daxil edin: ";
	cin>>a;
	cout<<"\nmusbet eded daxil edin: ";
	cin>>b;
	min=(a<b)? a:b;
	cout<<"\nededlerin cemi: "<<a*b<<"\nminumumu: "<<min;
	cout<<"\n"<<a*b<<" < "<<min;
	cout<<"\nteorem ibat olundu...\n";
	system("PAUSE");
}
