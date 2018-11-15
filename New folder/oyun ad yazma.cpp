#include<iostream>
#include<Windows.h>
#include<conio.h>
#define OLCU 20
using namespace std;
int main(){
	char yer[OLCU][OLCU]={""};
	char istiqamet;
	int movqe1=1,movqe2=1,i,j,x=1;
	yer[movqe1][movqe2]='#';
	bas:
	for(i=0;i<OLCU;i++)
	for(j=0;j<OLCU;j++)
	if(i==0 || i==(OLCU-1) || j==0 || j==(OLCU-1))yer[i][j]='~';
	for(;;){system("CLS");
		for(i=0;i<OLCU;i++){cout<<"\n";
		for(j=0;j<OLCU;j++)
			cout<<yer[i][j];
		}
		
		switch(x){
		case 1:
		{		cout<<"\n\nYazili hereket ucun 'y'";
				istiqamet=_getch();
				if(istiqamet=='y' || istiqamet=='Y'){
					x=2;
					goto bas;
				}
			    if((istiqamet=='a' || istiqamet=='A') && (movqe2-1)>0){
				yer[movqe1][movqe2]=' ';
				yer[movqe1][--movqe2]='#';
			}
				if((istiqamet=='d' || istiqamet=='D') && (movqe2+1)<(OLCU-1)){
				yer[movqe1][movqe2]=' ';
				yer[movqe1][++movqe2]='#';
			}
				if((istiqamet=='w' || istiqamet=='W') && (movqe1-1)>0){
				yer[movqe1][movqe2]=' ';
				yer[--movqe1][movqe2]='#';
			}
				if((istiqamet=='s' || istiqamet=='S') && (movqe1+1)<(OLCU-1)){
				yer[movqe1][movqe2]=' ';
				yer[++movqe1][movqe2]='#';
			}
		}
			break;
			case 2:
		{		cout<<"\n\nYazisiz hereket ucun 'y'";
				istiqamet=_getch();
				if(istiqamet=='y' || istiqamet=='Y'){
					x=1;
					goto bas;
				}
			    if((istiqamet=='a' || istiqamet=='A') && (movqe2-1)>0){
				yer[movqe1][movqe2]='*';
				yer[movqe1][--movqe2]='#';
			}
				if((istiqamet=='d' || istiqamet=='D') && (movqe2+1)<(OLCU-1)){
				yer[movqe1][movqe2]='*';
				yer[movqe1][++movqe2]='#';
			}
				if((istiqamet=='w' || istiqamet=='W') && (movqe1-1)>0){
				yer[movqe1][movqe2]='*';
				yer[--movqe1][movqe2]='#';
			}
				if((istiqamet=='s' || istiqamet=='S') && (movqe1+1)<(OLCU-1)){
				yer[movqe1][movqe2]='*';
				yer[++movqe1][movqe2]='#';
			}
		}
		break;
	}}
	return 0;
}
