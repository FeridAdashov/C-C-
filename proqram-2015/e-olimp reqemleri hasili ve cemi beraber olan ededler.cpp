#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,i,k,t,m,s,p,a=0,b;
	cout<<"nece reqemli ededler? ";
	cin>>n;
	k=pow(10,(n-1));
	t=pow(10,n);
	for(i=t-1;i>=k;i--){m=i; s=0; p=1;
		while(m>0){
			s+=m%10;
			p*=m%10;
			m/=10;
		} if(s==p) { cout<<i<<"\n";
		  a++; b=i;}
	}    
	      if(n==1) {
		  a++; b--;} 
		  cout<<"\nbu ededlerin sayi ve en kiciyi: "<<a<<"  "<<b;
	return 0;
}
//BY SAXURES
