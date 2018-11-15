#include<iostream>
using namespace std;

class dortgen{
public:
	int kenar1,kenar2;
	dortgen(){};
	virtual void alan(){
		cout<<"Dortgenin alani : "<<kenar1*kenar2<<endl;
	}
};

class kare: public dortgen{
	public:
		kare(int x){
			kenar1=x;
		}
		void alan(){
			cout<<"Karenin alani : "<<kenar1*kenar1<<endl;
		}
};
class dikdortgen: public dortgen{
	public:
		dikdortgen(int x,int y){
			kenar1=x;  kenar2=y;
		}
		void alan(){
			cout<<"Dikdortgenin alani : "<<kenar1*kenar2<<endl;
		}
};

int main(){
	kare no1(4);
	dikdortgen no2(4,5);
	dortgen *p;
	p=&no1;
	p->alan();
	p=&no2;
	p->alan();
	return 0;
}

