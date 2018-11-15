#include<iostream>
using namespace std;

class time{
	int san,deq,saat;
	public:
		void zaman_al(int,int,int);
		void zaman_qaytar();
};

void time::zaman_al(int a,int b,int c)
{
	san=a;
	deq=b;
	saat=c;
}

void time::zaman_qaytar()
{
if(san>=60){
	deq+=san/60;
	san=san%60;
}	
if(deq>=60){
	saat+=deq/60;
	deq=deq%60;
}	
cout<<"Girilen vaxt: "<<saat<<" Saat "<<deq<<" deqiqe "<<san<<" saniye-dir...";
}

int main(){
	time a;
	a.zaman_al(12,70,2);
	a.zaman_qaytar();	
	return 0;
}
