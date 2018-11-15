#include<iostream>
using namespace std;
int main(){
	int i,k,j,s=0;
	cout<<"nrce ededi arasdiraq? ";
	cin>>k;
	int a[k];
	cout<<"ededleri daxil et: \n";
	for(i=0;i<k;i++)
	cin>>a[k];
	for(i=2;i<k;i++){
	for(j=2;j<=i;j++)
		if(i%j==0)
		break;
		if(i==j) s++;
	}
	cout<<s;
}
