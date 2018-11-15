#include<iostream>
using namespace std;

class kv{
	int en,uz;
	public:
		void parametr_gir(){
			cout<<"En: "; cin>>en;
			cout<<"Uz: "; cin>>uz;
		}
		friend void qaytar(kv b){
			cout<<"\nPerimetr: "<<(b.en+b.uz)*2<<"\n";
			cout<<"\nSahe: "<<b.en*b.uz<<"\n";
		}
};


		
		
int main(){
	kv a;
	a.parametr_gir();
	qaytar(a);
	return 0;
}
