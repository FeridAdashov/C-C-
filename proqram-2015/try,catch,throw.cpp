#include<iostream>
using namespace std;
int main(){
	int a;
	while(true){
		try{
			cout<<"\n5-den kicik eded hansidir? ";
			cin>>a;
			if(a>=5) throw a;
			else cout<<"TRUE\n";
		}
		catch(...){
			cout<<"WRONG!\n";
		}
	}
	return 0;
}
