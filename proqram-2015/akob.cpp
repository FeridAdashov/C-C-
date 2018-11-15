#include<iostream>
using namespace std;
int main(){
int a,b,c,i;
cout<<"iki eded daxil edin:\n";
cin>>a>>b;
if(a>b) c=a;
else    c=b;
while(c%a!=0 || c%b!=0){
	c++;
}
cout<<"AKOB ( "<<a<<" , "<<b<<" )= "<<c;
return 0;
}
