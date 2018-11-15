#include<iostream>
#include<Windows.h>
#include<cstring>
#include<conio.h>
#include<cstdlib>
#include<time.h>
using namespace std;
int main(){
	char yer[10][10]={""};
	char istiqamet;
	int movqe1=1,movqe2=1,i,j;
	cout<<"BASLA\n";
	yer[movqe1][movqe2]='#';
	srand(time(NULL));
	i=rand()%8+1;
	j=rand()%8+1;
	yer[i][j]='*';
	for(i=0;i<10;i++)
	for(j=0;j<10;j++)
	if(i==0 || i==9 || j==0 || j==9)yer[i][j]='~';
	for(;;){system("CLS");
		for(i=0;i<10;i++){cout<<"\n";
		for(j=0;j<10;j++)
			cout<<yer[i][j];
		}
		istiqamet=_getch();
		    if((istiqamet=='a' || istiqamet=='A') && (movqe2-1)>0){
			yer[movqe1][movqe2]=' ';
			yer[movqe1][--movqe2]='#';
		}
			if((istiqamet=='d' || istiqamet=='D') && (movqe2+1)<9){
			yer[movqe1][movqe2]=' ';
			yer[movqe1][++movqe2]='#';
		}
			if((istiqamet=='w' || istiqamet=='W') && (movqe1-1)>0){
			yer[movqe1][movqe2]=' ';
			yer[--movqe1][movqe2]='#';
		}
			if((istiqamet=='s' || istiqamet=='S') && (movqe1+1)<9){
			yer[movqe1][movqe2]=' ';
			yer[++movqe1][movqe2]='#';
		}

	}
	return 0;
}
