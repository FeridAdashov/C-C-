#include<iostream>
using namespace std;

class intdizi{
	int *p,ts,es;
	public:
		intdizi(){
			p=new int[10];
			ts=10;
			es=0;
		}
		intdizi(int olcu){
			p=new int[olcu];
			ts=olcu;
			es=0;
		}

		void genislet(int olcu){
			int *yeniyer=new int[ts+olcu];
			memcpy(yeniyer,p,sizeof(int)*es);
			delete [] p;
			p=yeniyer;
		}
		
		void elave(int a){
			if(es==ts) genislet(ts);
			p[es]=a;
			es++;
		}
		bool dogru(int a){
			if(a>=es) return false;
			if(a<0)   return false;
			return true;
		}
		int getir(int a){
			return p[a];
		}
	
};

int main(){
	intdizi a(10);
	for(int i=0;i<10;i++)
	a.elave(i);
	for(int i=0;i<15;i++)
	if(a.dogru(i)==true)
	cout<<a.getir(i)<<"\n";
	else cout<<"Yaddasi kecdiz...\n";
	return 0;
}
