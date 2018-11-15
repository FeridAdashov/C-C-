#include<iostream>
using namespace std;
int main(){
int a,b,t,k,n;
float m=0;
cin>>a>>b;
cin>>k; n=k;
t=a/b;   a%=b;
while(k>0){
a*=10;
m=m*10+a/b;
a%=b;
k--;	
}
while(n>0){
	m/=10;
	n--;
}
cout<<t+m;
return 0;
}//1-ci usul yaxwi usul
/*#include<iostream>
using namespace std;
int main(){
	float x1,y1,x2,y2;
	cin>>x1>>x2;
printf("%.5f",x1/x2);
}*/
/*2-ci usul  reqem sayina gore
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float x1,y1,x2,y2;
	cin>>x1>>x2;
	cout<<setprecision(3)<<x1/x2;
	return 0;
}*/
