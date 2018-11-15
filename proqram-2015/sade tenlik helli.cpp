#include<iostream>
#include<cmath>
using namespace std;
int main(){int a,b,c;
	int x;
	cout<<"(1) p(x)=7*x^3+x^2-3\n(2) p(x)=-16*x^8+14*x^6+30*x^5-x^4+x\n(3) p(x)=100";
	cout<<"\nx-i daxil et: ";
	cin>>x;
	a=7*pow(x,3)+pow(x,2)-3;
	b=-16*pow(x,8)+14*pow(x,6)+30*pow(x,5)-pow(x,4)+x;
	c=100;
	cout<<"(1) p("<<x<<") = "<<a<<"\n(2) p("<<x<<") = "<<b<<"\n(3) p("<<x<<") = "<<c;
	return 0;
}
