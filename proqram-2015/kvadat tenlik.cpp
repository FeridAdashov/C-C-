#include<iostream>
#include<math.h>
using namespace std;
int main(){ system("color 4a");
	float a,b,c,D,x1,x2;
	cout<<"kvadrat tenliyin emsallarini daaxil et:\n";
	cin>>a>>b>>c;
	D=b*b-4*a*c;
	if(D>0){
		x1=(-b+sqrt(D))/(2*a);
		x2=(-b-sqrt(D))/(2*a);
		cout<<"1-ci kok: "<<x1<<"\n2-ci kok: "<<x2;
	}
	else if(D==0){
	x1=-b/(2*a);
	cout<<"her iki kok: "<<x1;
	}
	else cout<<"kvadrat tenliyin heqiqi koku yoxdur...";
	return 0;
}
