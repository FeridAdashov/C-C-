#include<iostream>
#define a cout<<"\n\n*********************\n\n";
using namespace std;
int main(){system("color 4a");
	int gsay=0,mechul=200,t=0;
	a;
	cout<<"eded daxil et: ";
	while(gsay!=mechul){
		cin>>gsay;
		if(gsay<mechul && gsay!=mechul)
		cout<<"eee yoooo daha boyuk eded daxil et: ";	
		else if(gsay!=mechul)cout<<"\aeee yooo daha kicik eded daxil et: ";	
		if(gsay==mechul) cout<<"Allaha wukur tapdin...";
		t++;
		if(t==5 && gsay!=mechul)cout<<"\n\atezol vaxtim yoxdu...:-)";
		if(t==8 && gsay!=mechul) cout<<"\n\ane tupoy adamsaneee... :-)";
		a;
	}	
	return 0;
}
