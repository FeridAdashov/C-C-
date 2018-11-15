#include<iostream>
using namespace std;
int main(){
int i,j,a,b,s;
cout<<"birinci deyeri girin: "; cin>>a;
cout<<"ikinci deyeri girin: ";  cin>>b;
cout<<a<<" ile "<<b<<" arasindaki mukemmel ededler:\n";
for(i=a;i<=b;i++){s=0;
	for(j=1;j<i;j++)
	if(i%j==0) s+=j;
	if(i==s) cout<<i<<" ";
}
	return 0;
}
