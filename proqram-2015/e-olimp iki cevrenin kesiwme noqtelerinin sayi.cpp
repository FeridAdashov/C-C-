#include<iostream>
#include<math.h>
using namespace std;
//IKI CEVRENIN KESIWME NOQTELERININ SAYI...
int main(){
	float x1,x2,y1,y2,r1,r2,n,k;
	cin>>x1>>y1>>r1;
	cin>>x2>>y2>>r2;
	k=sqrt(pow((y1-y2),2)+pow((x1-x2),2));
	if(k>r1+r2)      cout<<0;
	else if(k<r1+r2) cout<<2;
	else if(k==r1+r2)cout<<-1;
	return 0;
	//BY SAXURES...
}
