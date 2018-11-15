#include<iostream>
using namespace std;
int main(){
int x,i;
cin>>x;
for(i=31;i>=0;i--){
cout<<(((x>>i)%2) ? '1':'0')<<" ";
if(i%8==0)cout<<endl;}
	return 0;
}
