#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int i,a,n,s=0,p;
	cout<<"eded daxil edin:" ;
	cin>>a;
	cout<<"dovr sayini daxil edin: ";
	cin>>n;
	for(i=0;i<=n;i++)
	s+=pow(a,i);
	p=(pow(a,(n+1))-1)/(a-1);
	if(s==p) cout<<s<<" = "<<p<<"\nisbat olundu...\n";
	system("PAUSE");
}
