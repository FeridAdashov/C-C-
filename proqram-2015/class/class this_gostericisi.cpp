#include<iostream>
using namespace std;

class this_gos{
	int x;
	public:
	void qiy_otur(int x){
		this->x=x;
	}
	void qaytar(){
		cout<<"Deyer: "<<x;
	}
};

int main(){
	this_gos a;
	a.qiy_otur(7);
	a.qaytar();
	return 0;
}
