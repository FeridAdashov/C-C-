#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n,i,k=0,m;
cout<<"ededi daxil et: ";
cin>>n;
m=n;
cout<<"sira nomresini daxil edin: ";
cin>>i;
while(n>0){
	k++;
	n/=10;
}
k-=i;
m/=pow(10,k);
cout<<i<<" -ci reqem: "<<m%10;
return 0;
}
