#include<iostream>
using namespace std;

class vektor{
	int x,y;
	public:
		vektor(){
			x=0;  y=0;
		}
	vektor(int a,int b){
		x=a; y=b;
	}
	void koordinatgonder(int a,int b){
		x=a;  y=b;
	}
	 vektor operator+(vektor c){
	 	vektor kecid;
	 	kecid.x=x+c.x;
	 	kecid.y=y+c.y;
	 	return kecid;
	 }
	void goster(){
		cout<<"x="<<x;
		cout<<"\ny="<<y << endl;
	}
};

int main(){
	vektor a(4,5),b(7,8),c;
	c=a+b;
	c.goster();
	a.koordinatgonder(1,2);
	c=a+a;
	c.goster();
	return 0;
}
