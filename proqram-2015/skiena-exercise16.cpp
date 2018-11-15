#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cout<<"ixtiyari musbet eded daxil edin: ";
	cin>>n;
	cout<<"n*n*n+2*n dusturu ile hesablanan ixtiyari eded 3-e bolunur\n";
	cout<<(pow(n,3)+2*n)<<" = "<<(pow(n,3)+2*n)/3<<" * "<<3;
	cout<<"\nisbat olundu...\n";
	system("pause");
}
