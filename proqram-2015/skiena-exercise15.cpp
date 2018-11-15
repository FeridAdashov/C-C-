#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float i,a,n,s=0,p;
	cout<<"dovr sayini daxil edin: ";
	cin>>n;
	for(i=1;i<=n;i++)
	s+=1/(i*(i+1));
	p=n/(n+1);
	if(s==p) cout<<s<<" = "<<p<<"\nisbat olundu...\n";
	system("PAUSE");
}
