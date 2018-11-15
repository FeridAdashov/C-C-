#include<iostream>
using namespace std;

void gosterici(int *x){
	*x=56;
	cout<<"\nGosterici ile cagirmada deyer = "<<*x;
}
void basvuru(int &x){
	x=56;
	cout<<"\nBasvuru ile cagirmada deyer = "<<x;
}

int main(){
	int a;
	a=5;
	cout<<"Gosterici ile cagirmadan evvel deyer: "<<a;
	gosterici(&a);
	cout<<"\nGosterici ile cagirmadan sonra deyer: "<<a;
	a=5;
	cout<<"\nBasvuru ile cagirmadan evvel deyer: "<<a;
	basvuru(a);
	cout<<"\nBasvuru ile cagirmadan sonra deyer: "<<a;
	return 0;
}
