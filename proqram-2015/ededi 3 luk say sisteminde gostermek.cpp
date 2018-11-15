#include<iostream>
using namespace std;
int main(){
	int n,k=0,i,j,t=0,p;
	cout<<"neceye qeder ededleri cevirek? : ";
	cin>>i;
	cout<<"necelik say sisteminde cevirek? :";
	cin>>p;
	for(j=1;j<=i;j++){
		n=j;
		if(n%p==0)n++;
	while(n>0){
	k=k*10+n%p;
	n/=p;
    }
	while(k>0)
{
		n=n*10+k%10;
		k/=10;
}
if(j%p==0) n--;
	cout<<j<<" -ci = "<<n<<"\n";
}
	return 0;
}
//BY SAXURES
