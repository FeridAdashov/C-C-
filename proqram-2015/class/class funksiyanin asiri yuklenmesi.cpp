#include<iostream>
using namespace std;

class vurma{
	public:
		int vur(int x,int y){
			return x*y;
		}
		double vur(double x,double y){
			return x*y;
		}
};

int main(){
	vurma v;
	cout<<v.vur(4,5)<<endl;
	cout<<v.vur(4.5,2.7);
	
	return 0;
}
