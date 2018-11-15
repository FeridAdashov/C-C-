#include<iostream>
#include<cmath>
using namespace std;
void kok(float a,float b,float c){
	float D,x1,x2;
	D=b*b-4*a*c;
	if(D>0){
		x1=(-b-sqrt(D))/(2*a);
		x2=(-b+sqrt(D))/(2*a);
		cout<<"kok 1 = "<<x1<<"\nkok 2 = "<<x2;
	}
	else if(D==0){
	x1=(-b)/2*a;
	cout<<"Tenliyin yegane koku var: "<<x1;
	}
	else cout<<"Tenliyin heqiqi koku yoxdur...";
}
int main(){
	float a,b,c;
	cout<<"\n\nKvadrat tenliyin emsallarini daxil edin: ";
	cin>>a>>b>>c;
	kok(a,b,c);	
	return 0;
}
