#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,i,s1=0,s2=0;
	cout<<"dovr sayini gir: ";
	cin>>n;
	for(i=1;i<=n;i++){
		s1+=pow(i,3);
		s2+=i;
	} cout<<s1<<" = "<<pow(s2,2)<<"\nisbat oundu...\n";
	system("pause");
}
