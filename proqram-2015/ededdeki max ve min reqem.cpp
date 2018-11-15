#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,max,min;
	cin>>n;
	max=n%10;
	min=n%10;
	while(n>0){
		if(n%10>max)max=n%10;
		if(n%10<min) min=n%10;
		n/=10;
	}
	cout<<max<<" "<<min;
	
	return 0;
}
