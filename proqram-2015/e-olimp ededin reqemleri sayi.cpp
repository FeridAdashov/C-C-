#include<iostream>
using namespace std;
//ededin reqemleri sayi....
int main(){
	system("color a");
	int n,k=0;
	cout<<"ededi daxil edin: ";
	cin>>n;
	if(n==0) k++;
	while(n){
		k++;
		n/=10;
	}
	cout<<"ededin reqemlerinin sayi: "<<k;
	return 0;
	//BY SAXURES....
}
