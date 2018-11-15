#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
struct kitablar
{
	
	char kitabin_adi[45],muellifi[25],dili[20];
	int il,satis;
};
int main()
{
	int n=10;
	int i,secim1;
	kitablar x[15]=
	{
	"Iki seherin hekayesi","C.Dikens","ingilis",1859,20000,
	"kicik sehzade","Antuan_de_S.","fransiz",1943,19000,
	"Uzuklerin hokumdari","Con_Tolkin","ingilis",1954,19300,
	"Hobbit","Con_Tolkin","ingilis",1937,18500,
	"Qirmizi otaqda yuxu","Tsao_Tsuyetsin","cin",1971,16800,
	"On zenci balasi","Aqata_Kristi","ingilis",1939,16200,
	"Kimyager","Paulo_Koelyo","portugal",1988,12000,
	"Dusun ve zenginles","Napoleon_Hill","ingilis",1937,15300,
	"Haydi","Yohan_Spiri","alman",1880,8450,
	"Lolita","Vladimir_Nabokov","ingilis",1955,19850,
	
	};
cout<<"kitablari gostermek ucun 1 eks halda 0 \n";
cin >> secim1;
if(secim1==1)
{
	system("color c");
	for(i=0;i<n;i++)
	{
		cout<<"\nkitabin_adi: "<<x[i].kitabin_adi;
		cout<<"\tmuellifi: "<<x[i].muellifi;
		cout<<"\tdili:"<<x[i].dili;
		cout<<"\til: "<<x[i].il;
		cout<<"\t  satis: "<<x[i].satis;
	}
		evvel1:
	evvel:
cout<<"\n\nMenu isteyirsinizmi menim sahibim??\nIsteyirsinizse 1 duymesini klikleyin :)\nSeciminiz-->";
cin>>secim1;
if(secim1==1)
{//menu bloku
	cout<<"\n1.Axtaris\n2.Kitab elave etmek\n3.Kitab silmek\n0.Cixis\nSeciminiz-->";
cin>>secim1;
cout<<endl<<endl;
if(secim1==0)
goto son;
if(secim1==1)
{
	cout<<"\n\n1.Ad ile axtaris\n2.muellife gore axtaris\n3.satisa gore axtaris\n4.Bas herfe uygun axtaris\n5.ile gore axtaris\n6.dile gore axtaris\nSeciminiz-->";
	cin>>secim1;
	cout<<endl;
	if(secim1==4)
	{
	cout<<"Bas herfi daxil edin: ";
	char isim[0];
cin>>isim[0];
	for(i=0;i<n;i++)	
	{
		if(x[i].kitabin_adi[0]==isim[0])
		{
			cout<<"\nkitabin_adi: "<<x[i].kitabin_adi;
		cout<<"\tmuellifi: "<<x[i].muellifi;
		cout<<"\tdili:"<<x[i].dili;
		cout<<"\til: "<<x[i].il;
		cout<<"\t  satis: "<<x[i].satis;
	}//bas herfyoxlama bloku
	}//for bloku
	}//bas herf menu bitis
	else
	if(secim1==1)
	{
		char isim[10];
		cout<<"\nAxtarmaq istediyiniz kiatbin adini daxil edin:";
				cin>>isim;
			for(i=0;i<n;i++)	
                {
                	bool f=true;
                	for(int j=0;j<strlen(x[i].kitabin_adi);j++)
                	{
                		if(isim[j]!=x[i].kitabin_adi[j])
                		{
                			f=false;
                			break;
						}
					}
					if(f)
					{	
						cout<<"\nkitabin_adi: "<<x[i].kitabin_adi;
						cout<<"\tmuellifi: "<<x[i].muellifi;
						cout<<"\tdili:"<<x[i].dili;
						cout<<"\til: "<<x[i].il;
						cout<<"\t  satis: "<<x[i].satis;
					
					}	
				}
	}
	else
	if(secim1==2)
	{
		char soyad[10];
		cout<<"\nAxtarmaq istediyiniz muellifi daxil edin:";
				cin >> soyad;
					for(i=0;i<n;i++)	
                {
                	bool f=true;
                	for(int j=0;j<strlen(x[i].muellifi);j++)
                	{
                		if(soyad[j]!=x[i].muellifi[j])
                		{
                			f=false;
                			break;
						}
					}
					if(f)
					{		cout<<"\nkitabin_adi: "<<x[i].kitabin_adi;
							cout<<"\tmuellifi: "<<x[i].muellifi;
							cout<<"\tdili:"<<x[i].dili;
							cout<<"\til: "<<x[i].il;
							cout<<"\t  satis: "<<x[i].satis;
			
					}	
				}
	}
	else
	if(secim1==3)
	{
		int nomre;
		cout<<"\nsatisi daxil edin-->";
		cin>>nomre;
		cout<<"\nsatisi--"<<nomre<<"--olan kitab:\n";
		for(i=0;i<n;i++)	
        {
        	if(nomre==x[i].satis)
        	{
        					cout<<"\nkitabin_adi: "<<x[i].kitabin_adi;
							cout<<"\tmuellifi: "<<x[i].muellifi;
							cout<<"\tdili:"<<x[i].dili;
							cout<<"\til: "<<x[i].il;
							cout<<"\t  satis: "<<x[i].satis;
			}
		}
	}
	else	
	if(secim1==5)
	{
		int yas;
		cout<<"\nHansi ilden olan kitablari axtarmaq isteyirsiniz: ";
		cin >> yas;
		for(i=0;i<n;i++)
		{
			if(x[i].il==yas)
			{
					cout<<"\nkitabin_adi: "<<x[i].kitabin_adi;
		cout<<"\tmuellifi: "<<x[i].muellifi;
		cout<<"\tdili:"<<x[i].dili;
		cout<<"\til: "<<x[i].il;
		cout<<"\t  satis: "<<x[i].satis;
			}
		}
	}
	else
	if(secim1==6)
	{
			char vad[10];
		cout<<"\nAxtarmaq istediyiniz dili daxil edin:";
				cin >> vad;
					for(i=0;i<n;i++)	
                {
                	bool f=true;
                	for(int j=0;j<strlen(x[i].dili);j++)
                	{
                		if(vad[j]!=x[i].dili[j])
                		{
                			f=false;
                			break;
						}
					}
					if(f)
					{
						
			cout<<"\nkitabin_adi: "<<x[i].kitabin_adi;
		cout<<"\tmuellifi: "<<x[i].muellifi;
		cout<<"\tdili:"<<x[i].dili;
		cout<<"\til: "<<x[i].il;
		cout<<"\t  satis: "<<x[i].satis;
					}
					
					
				}
	}


}//search bloku
else
if(secim1==2)
{

	char name[12],author[20],language[10];
	int age,say,k;
	cout<<"\n\nNece kitab elave olunacaq..\nSay=";
	cin >> say;
	cout<<"\n\nKitabin  Adini,Muellifini,Dilini ve ilini daxil edin:\n";
	for(int j=26,k=0;k<say;k++,i++,j++)
	{
	cout<<"Ad: "; cin >>name;
	cout<<"Soyad: "; cin>>author;
	cout<<"Ata adi: "; cin>>language;
	cout<<"Yas: ";  cin>>age;
	n++;
for(int j=0;j<strlen(name);j++)
x[i].kitabin_adi[j]=name[j];
for(int j=0;j<strlen(author);j++)
x[i].muellifi[j]=author[j];
for(int j=0;j<strlen(language);j++)
x[i].dili[j]=language[j];
x[i].il=age;
x[i].satis=j;
}//kitab sayi
system("cls");
cout<<"\n\n1.Yeni Siyahi:\n";
cin >> secim1;
if(secim1==1)
{
	for(i=0;i<n;i++)
	{
		cout<<"\nkitabin_adi: "<<x[i].kitabin_adi;
		cout<<"\tmuellifi: "<<x[i].muellifi;
		cout<<"\tdili:"<<x[i].dili;
		cout<<"\til: "<<x[i].il;
		cout<<"\t  satis: "<<x[i].satis;
	}
}
goto evvel;
}//kitab elave etmek bloku
else
///////////////////
if(secim1==3)
{
	int nomre;
system("cls");
	for(i=0;i<n;i++)
		{
		cout<<"\nkitabin_adi: "<<x[i].kitabin_adi;
		cout<<"\tmuellifi: "<<x[i].muellifi;
		cout<<"\tdili:"<<x[i].dili;
		cout<<"\til: "<<x[i].il;
		cout<<"\t  satis: "<<x[i].satis;
	
	
}
cout<<"\n\nHansi nomreli kitabi silmek isteyirsiniz-->";
		cin>>nomre;	
		for(i=0;i<n;i++)
		{
			if(nomre==x[i].satis)
	{
		continue;
	}
		cout<<"\nkitabin_adi: "<<x[i].kitabin_adi;
		cout<<"\tmuellifi: "<<x[i].muellifi;
		cout<<"\tdili:"<<x[i].dili;
		cout<<"\til: "<<x[i].il;
		cout<<"\t  satis: "<<x[i].satis;
	
	
}
}
/////////////////////
}//menu bloku
}//esas secim
cout<<"\n\n1.Davam etmek\n0.Cixis\n";
cin >> secim1;
if(secim1==1)
goto evvel1;
son:
cout<<"\nXudahafiz!";
}//main

