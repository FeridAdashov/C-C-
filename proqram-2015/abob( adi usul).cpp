#include<iostream>
using namespace std;
int main(){
int a,b,i,c;
cout<<"iki eded daxil edin:\n";
cin>>a>>b;
if(a>b) c=b;
else c=a;
cout<<"ABOB( "<<a<<" , "<<b<<" ) =";
for(i=c;i>0;i--)
if(a%i==0 && b%i==0)
{
	cout<<i;
	break;
}
return 0;
}
