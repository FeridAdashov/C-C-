#include<iostream>
using namespace std;

class mod{
	int say1,say2,say3;
	public:
	void modal(){
		say1=10;
		say2=10;
		say3=10;
	}
	void modal(int x,int y,int z){
		say1=say1%x;
		say2=say2%y;
		say3=say3%z;
	}
	void goster(){
		cout<<"\nx="<<say1;
		cout<<"\ny="<<say2;
		cout<<"\nz="<<say3;
	}
};

int main(){
	mod a;
	a.modal();
	a.modal(4,5,6);
	a.goster();

  return 0;
}

