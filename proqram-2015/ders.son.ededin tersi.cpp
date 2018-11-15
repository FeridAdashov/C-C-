#include<iostream>
using namespace std;
int main(){
	int x,y=0;
	cout<<"Eded daxil et:"; cin>>x;
	while(x>0){
		y=y*10+x%10;
		x/=10;
	}
	cout<<y;
	
	return 0;
}
