#include<iostream>
#include<Windows.h>
using namespace std;
int faktoriyal(int n){
	if(n==1)return 1;
	else return n*faktoriyal(n-1);
}
int permu(int a,int b){
	return faktoriyal(a)/faktoriyal(a-b);
}
int main(){int a,b,per;
system("color a");
cout<<"birinci sayiyi girin: "; cin>>a;
cout<<"birinci sayiyi girin: "; cin>>b;
cout<<a<<" ile "<<b<<" -nin permutasyonu: "<<permu(a,b);
return 0;
}
