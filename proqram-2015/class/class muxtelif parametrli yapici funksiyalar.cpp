#include<iostream>
using namespace std;

class deyer{
	public:
	int a,b,c;
	deyer(){};
		deyer(int x,int y){
			a=x;  b=y;
		}
		deyer(int x,int y,int z){
			a=x;  b=y;  c=z;
		}
		friend void goster();
		
}d1,d2; 

void goster(){
	cout<<"\na-nin qiymeti = "<<d1.a;
	cout<<"\nb-nin qiymeti = "<<d1.b;
	cout<<"\nc-nin qiymeti = "<<d1.c;
	cout<<"\na-nin qiymeti = "<<d2.a;
	cout<<"\nb-nin qiymeti = "<<d2.b;
}

int main(){
d1.a=1;
d1.b=2;
d1.c=3;
d2.a=4;
d2.b=5;
	goster();
return 0;
}
