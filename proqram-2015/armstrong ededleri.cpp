#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int cem(int t){

	int s=0,a=t,p,b=0,i;
    while(t>0)
{  b++; t=t/10;  }
	
	    while(a>0)
	{	p=1;
		for(i=0;i<b;i++)
		p*=(a%10);
		s+=p;
		a=a/10;
	} return s;
}
int edreq(int t){
	while(t>0){
		cout<< t%10 <<" , ";
		t=t/10;
	}}

int main(){
	int n,i;
	cin>>n;
			for(i=1;n>0;i++)
		{	if(i==cem(i)){
			n--;
			edreq(i);
			cout<<" -> "<<i<<"\n";
		}}
	return 0;
}
