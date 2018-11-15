#include<iostream>
using namespace std;
int main(){
int x,i,k=0;
cin>>x;
for(i=31;i>=0;i--)
if((x>>i)%2==1)k++;
cout<<k;
	return 0;
}
