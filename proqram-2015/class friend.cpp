#include<iostream>
using namespace std;
class Max{
	private:
		int a,b;
	public:
		void func1(){
			cout<<"Ededleri daxil edin: ";
			cin>>a>>b;
		}
friend void func2(Max d){ 
   //  d.func1();
	 int max;
	if(d.a>d.b) max=d.a;
	 else max=d.b;
	  cout<<"Max="<<max;
}
} ;
int main(){
       Max ad;
	   ad.func1();
	   func2(ad);
	   return 0;
}

