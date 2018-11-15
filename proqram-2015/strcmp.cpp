#include<iostream>
#include<cstring>

using namespace std;

int main(){
	
	char a[]={"azerbaycan"},b[]={"azerbaycan kk"};
	cout<<"azerbaycan  azerbaycan kk suzunden kicikdir ona gore menfi deyer: "<<strcmp(a,b)<<endl<<endl;
	
	char c[]={"ferid 97"},d;
	
	cout<<"Verilen setr: "<<c<<"\nAXtarilan herfi gir: ";
	cin>>d;
	
	if(strchr(c,d)!=NULL)
	cout<< "Bele herf verilen setrde var...\n\n";
	else cout<< "Bele herf verilen setrde yoxdur...\n\n";
	
	char e[]={"men Adasov Ferid"};
	char *atomptr;
	cout<<"Verilen setr: "<<e<<"\nparcalanmadan sonra\n";
	atomptr=strtok(e," ");
	while(strtok!=NULL){
		cout<<atomptr<<endl;
		atomptr=strtok(NULL," ");
	}
	
	return 0;
}
