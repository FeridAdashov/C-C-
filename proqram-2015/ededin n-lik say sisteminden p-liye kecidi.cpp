#include<iostream>
using namespace std;
int main(){
	int n,k=0,i,t,p,l;
	cout<<"cevrilecek ededi daxil edin: ";
	cin>>n;   t=n;
	cout<<"necelik say sisteminden cevirek? :";
	cin>>p;   l=p;
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
if(t%p==0) n--;
cout<<"necelik say sistemine cevirek: ";
cin>>p;
cout<<t<<" ededinin "<<l<<" likden "<<p<<" liye kecidi: ";
	if(n%p==0)n++;
	t=n;
	while(n>0){
	k=k*10+n%p;
	n/=p;
    }
	while(k>0)
{
		n=n*10+k%10;
		k/=10;
}
if(t%p==0) n--;
cout<<n;
	return 0;
}
//BY SAXURES
