#include<iostream>
using namespace std;
class cem{
	int x,y;
	public:
	void gonder();
	void cixis();
};

void cem::gonder(){
		cout<<"\nIki eded daxil et: ";
		cin>>x>>y;
}

void cem::cixis(){
	cout<<"\ncem="<<x+y;
}
int main(){
	cem *t;
	int i;
	for(i=0;i<3;i++){
		t=new cem;
		t->gonder();
		t->cixis();
		delete t;
	}
	return 0;
}
