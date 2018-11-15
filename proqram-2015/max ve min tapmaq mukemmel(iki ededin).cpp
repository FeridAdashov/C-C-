#include<iostream>
using namespace std;
int fun(int x,int y,int &z){
	if(x>y) {z=y; return x;}
	else {z=x; return y;}
}
int main(){
int a,b,max,min;
cout<<"Birinci ededi daxil edin: "; cin>>a;
cout<<"Ikinci ededi daxil edin: "; cin>>b;
max=fun(a,b,min);
cout<<"Max="<<max<<endl<<"Min="<<min;
return 0;
}
