//yas hesablama proqrami(aylar 30 hesablanir)
#include<iostream>
using namespace std;
struct tarix{
	int gun,ay,il;
};
struct tarix yas(struct tarix,struct tarix);
int main(){
	struct tarix bugun,dogum,cavab;
	cout<<"Bugunun tarixini gir: ";
	cin>>bugun.gun>>bugun.ay>>bugun.il;
	cout<<"Dogum tarixini gir: ";
	cin>>dogum.gun>>dogum.ay>>dogum.il;
	cavab=yas(bugun,dogum);
	cout<<cavab.gun<<" gun, "<<cavab.ay<<" ay, "<<cavab.il<<" ildirki yasayirsan\n\nBY SAXURES";
return 0;
}
struct tarix yas(struct tarix x,struct tarix y){
	struct tarix cavab;
	if(x.gun<y.gun){
		x.ay-=1;
		cavab.gun=30+x.gun-y.gun;
	} else cavab.gun=x.gun-y.gun;
	
	if(x.ay<y.ay){
		x.il-=1;
		cavab.ay=12+x.ay-y.ay;
	} else cavab.ay=x.ay-y.ay;
	cavab.il=x.il-y.il;
	return cavab;
}
