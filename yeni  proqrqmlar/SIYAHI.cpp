#include <iostream>
#include <string.h>
using namespace std;

struct syh_el{
	int x;
	struct syh_el *novb_el;
};

syh_el *siyahi_yarat(struct syh_el *syh, int elem_say);
syh_el *siyahi_sil(struct syh_el *syh, int elem);
void siyahini_cap_et(struct syh_el *);
syh_el *axtar(syh_el *syh, int elem);

int main()
{
// istifade edeceyimiz deyishenleri elan edirik
syh_el *menim_syh;
// siyahinin bosh oldugunu bildirmek ucun
menim_syh = NULL;
int say,elem,x;
cout<<"~~~~~~~~~~~~~~~~~~~~~~SIYAHILAR~~~~~~~~~~~~~~~~~~~~\n\n";
cout<<"                                   YAZAN: FERID SAXURES \n\n";
while(1){
	
	cout<<"\n\n1.YENI_SIYAHI_YARAT\n2.SIYAHI_CAP_ET\n3.ELEMENT_SIL\n4.ELEMENT_AXTAR\n\nSECIM EDIN: ";
	cin>>x;
switch(x){
	case 1:{
		cout<<"Siyahinin elementlerinin sayini daxil edin \n";
		cin>>say;
		delete menim_syh;
		menim_syh=new syh_el;
		menim_syh = NULL;
		menim_syh = siyahi_yarat(menim_syh,say);
	}break;
	case 2:siyahini_cap_et(menim_syh);
	break;
	case 3:{
		cout<<"Siayhidan silmek istediyiniz elementin indeksini daxil edin\n";
		cin>>elem;
		menim_syh = siyahi_sil(menim_syh, elem);		
	}break;
	case 4:{
		cout<<"Elementi daxil et: "; cin>>elem;
		axtar(menim_syh,elem);
	}break;
	default:cout<<"Dogru secim etmediniz,xahis olunur birdaha secim edin: ";
} 
}
return 0;
} //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

syh_el *siyahi_yarat( syh_el *syh, int elem_say)
{ 
	syh_el *p, *q;
	p=syh;
	q=syh;
	int i,dey;
	
	for (i=1; i<=elem_say; ++i)
	{ 
		std::cout<<"siyahinin "<<i<<" -ci elementini daxil edin \n";
		std::cin>>dey;
		p = new syh_el;
		p->x = dey;
		p->novb_el = NULL;
		
		if (syh==NULL)
		{
			//siyahi boshdur, ilk element
			syh=p;
			q = p;
			p = NULL; 
		}
		else 
		{
			//siyahida element var
			q->novb_el = p;
			q = p;
		}
	}
	return syh;
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void siyahini_cap_et( syh_el *syh)
{ syh_el *p;
int dey;
p = syh;
if (syh == NULL ) {
cout<<"Siyahi boshdur \n\n";
return;
}
cout<<"Siyahinin elementleri \n\n";
while(p!=NULL){
dey = p->x;
cout<<dey<<" ";
p = p->novb_el; // novbeti elemente kec
}
cout<<"\n";
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
syh_el *siyahi_sil(syh_el *syh, int elem)
{ syh_el *p, *q;
p=syh;
int i,dey;
if (syh==NULL){
cout<<"Siyahi bosdur...\n\n"; 
return NULL;} // siyahi boshdur
if (elem==1){
// silmek istediyimiz element ilk elementdir
syh = p->novb_el;
p->novb_el = NULL;
delete p;
return syh;
}
for (i=1; i<elem-1; ++i)
if (p==NULL)
break;
else
p = p->novb_el;
if (p==NULL){
cout<<"Siyahida "<<elem<<" sayda element movcud deyil\n";
return syh;
}
q=p;
p = p->novb_el;
if (p->novb_el==NULL)
{ // silmek istediyimiz element sonuncu elementdir
q->novb_el=NULL;
delete p;
p=NULL;
q=NULL;
return syh;
}
// silmek istediyimiz element araliq elementdir
q->novb_el = p->novb_el;
p->novb_el = NULL;
delete p;
q=NULL;
return syh;
}

syh_el *axtar(syh_el *syh, int elem)
{ syh_el *p, *q;
int say=1;
p=syh;
if(p==NULL) cout<<"Bu siyahi bosdur...\n\n";
else{
while(p->x!=elem){
	if(p->novb_el==NULL){
		cout<<"Bele element siyahida yoxdur...\n\n";
		break;
	}
	p=p->novb_el;
	say++;
}
if(p->x==elem) cout<<"Bu element "<<say<<" -ci dir...\n\n";
}}
