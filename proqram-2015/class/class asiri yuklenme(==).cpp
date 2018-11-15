#include<iostream>
using namespace std;

class vektor{
	int x,y;
	public:
	vektor(){
		x=0;  y=0;
	}
	vektor(int a,int b){
		x=a;  y=b;
	}
	int operator==(vektor a){
		return x==a.x && y==a.y;
	}
};

int main(){
	vektor a(5,4),b(5,4);
	if(a==b) cout<<"Bu vektorlar beraberdir...\n";
	else cout<<"Bu vektorlar beraber deyil...\n";
	return 0;
}
