#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n>0){
		if(n%10!=3 && n%10!=7){
			cout<<"Bu eded tekce 3 ve 7 den ibaret deyil...";
			break;
		}
		n/=10;		
	}
	if(n==0) cout<<"Bu eded yalniz 3 ve 7 den ibaretdir...";
	return 0;
}
