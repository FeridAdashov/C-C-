/*#include<iostream>
using namespace std;

class deyer{
	int x;
	public:
	deyer(){
		x=5;
	}
	
	friend int qaytar(deyer a){
		return a.x;
	}
	
};

int main(){
	deyer t;
	cout<<qaytar(t);//funksiya friend oldugu ucun sinif qaytara bilir
	return 0;
}*/

#include<iostream>
using namespace std;

class deyer{
	int x;
	public:
	deyer(){
		x=5;
	}
	
	friend int qaytar();
}a;

int qaytar(){
	return a.x*a.x*a.x;
}

int main(){
	deyer t;
	cout<<qaytar();
	return 0;
}
