#include<iostream>
using namespace std;
int main(){
	int i,n,a,s=0;
	cout<<"eded daxil et: ";
	cin>>a;
	cout<<a<<" -nin kub cemleri\ndovr sayini daxil et: ";
	cin>>n;
	for(i=0;i<n;i++)
	s+=a*a*a;
	cout<<"cavab: "<<s;
	return 0 ;
	}
