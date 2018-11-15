#include<iostream>
using namespace std;

class A{
	int a;
	public:
		A(int x){
			a=x;
		}
		void goster1(){
			cout<<"A-dan a="<<a;
		}
};

class B{
	int a,b;
	public:
		B(int x,int y){
			a=x;  b=y;
		}
		void goster2(){
			cout<<"\nB-den a="<<a<<" b="<<b;
		}
};

class C:public A,public B{
	int a,b,c;
	public:
	C(int x,int y,int z):A(x),B(x,y){a=x;  b=y;  c=z;};
	void goster3(){
		goster1();
		goster2();
		cout<<"\nC-den a="<<a<<" b="<<b<<" c="<<c;
	}	
};

int main(){
	C bir(1,2,3);
	bir.goster3();
	return 0;
}



