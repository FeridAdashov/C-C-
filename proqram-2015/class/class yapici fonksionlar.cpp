/*#include<iostream>
using namespace std;
class kitab{
	public:
		string ad;
		int qiymet;
		kitab(string a,int x){
			ad=a;
			qiymet=x;
		}
	
};

int main(){
	kitab a("fff",2);//birbasa oturme elemek olur
	cout<<a.ad;
	
	return 0;
}*/

/*#include<iostream>
using namespace std;
class kitab{
	public:
		string ad;
		int qiymet;
		kitab(string a,int x){
			ad=a;
			qiymet=x;
		}
	~kitab(){
		cout<<"\nGOREV BITDI...";
	};
};

int main(){
	kitab a("fff",2);//birbasa oturme elemek olur
	cout<<a.ad;
	return 0;
}
*/
#include<iostream>
using namespace std;
class eded{
	public:
	int x,y;
		eded();
		void otur(int a,int b);
		void goster();
};
eded::eded(){
	x=5; y=10;
}
void eded::otur(int a,int b){
	x=a;  y=b;
}
void eded::goster(){
	cout<<"\nx="<<x<<"\ny="<<y;
}
int main(){
	eded a;
	a.goster();
	a.otur(7,8);
	a.goster();
	return 0;
}

