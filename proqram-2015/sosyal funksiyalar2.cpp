#include<iostream>
using namespace std;

template <class nese_birsey> 
void yaz(nese_birsey a){
	cout<<"Deyer : "<<a<<endl;
}

int main(){
	int x=5;
	float y=5.6;
	string s("Ferid adasov");
	bool t=true;
	
	yaz(x);
	yaz(y);
	yaz(s);
	yaz(t);
	return 0;
}
