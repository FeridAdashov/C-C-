#include<iostream>
using namespace std;
int main(){
	int yuk,kar_say,i,p=0,gun=0;
	cin>>yuk>>kar_say;
	if(yuk==2) cout<<"SONSUZ DOVUR...";
	else if(yuk<2) cout<<"MENTEQEYE CATMAZ (OLER)";
	else{
	int a[kar_say-yuk];
	for(i=0;i<kar_say;i++)
	a[i]=0;
	for(i=kar_say-yuk-1;i>=0;i--)
	{
		while(a[i]!=p+1){
			gun+=(i+1)*2;
			a[i]++;
		} p+=2;
	}
	cout<<"KARVANIN YOLA SERF ETDIYI VAXT: "<<gun+kar_say;
}
	return 0;
}
