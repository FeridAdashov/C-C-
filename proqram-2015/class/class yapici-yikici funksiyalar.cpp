#include<iostream>
using namespace std;
class a{
	int x;
	public:
	a(){
	x=5;
	cout<<"yapici..";		
	}
	~a(){
		cout<<"\nyikici...";
		
	}
};

int main(){
a b;
	return 0;
}
