/*#include<stdio.h>
#include<ctype.h>
#include<iostream>
using namespace std;
int main( )
{
printf( "%s\n%s\n%s\n\n", "isdigit i�in: ",
isdigit( '8' ) ? "8 bir rakamdir" : "8 bir rakam degildir ",
isdigit( '#' ) ? "# bir rakamdir " :"# bir rakam degildir" );
cout<<isgraph( 'o' )<<endl;
printf("%s",islower('M')? "girilen herf kicikdir":"girilen herf boyukdur");
return 0;
}


/*int isdigit ( int c);c bir rakam ise dogru bir deger,degilse 0(yanlis) d�nd�r�r.
int isalpha (int c);c bir harf ise dogru bir deger,degilse 0 d�nd�r�r.
int iaslnum (int c);c bir harf ya da rakamsa dogru bir deger,degilse 0 d�nd�r�r.
int isxdigit (int c);c onaltilik sistemde bir rakam degeri karakteri ise dogru bir
deger,degilse 0 d�nd�r�r.(ikilik sistem,sekizlik sistem,onluk sistem ve
onaltilik sistem i�in daha detayli bilgiyi Ekler E kisminda
bulabilirsiniz.)
int islower ( int c); c k���k bir harf ise dogru bir deger,degilse 0 d�nd�r�r.
int isupper (int c); c b�y�k bir harf ise dogru bir deger,degilse 0 d�nd�r�r.
int tolower ( int c); c bir b�y�k harf ise,tolower c �yi k���k harfe �evirerek d�nd�r�r,
degilse tolower arg�mani degistirmeden d�nd�r�r
int toupper (int c); c k���k harf ise,toupper c �yi b�y�k harfe �evirip d�nd�r�r,degilse
toupper arg�mani degistirmeden d�nd�r�r.
int isspace (int c); c yeni satir(�\n�),bosluk(� �),form besleme(�\f �),satir basi(�\r�),yatay
tab(�\t�) ya da d�sey tab(�\v�) karakterlerinden biriyse dogru bir deger,
degilse 0 d�nd�r�r.
int iscntrl (int c);c bir kontrol degiskeni ise dogru bir deger,degilse 0 d�nd�r�r.
int ispunct (int c); c bosluk,rakam ya da harften baska bir yazdirma karakteri ise dogru bir
deger,degilse 0 d�nd�r�r.
int isprint (int c); c bosluk (� �) karakteri de dahil olmak �zere bir yazdirma karakteri ise
dogru bir deger,degilse 0 d�nd�r�r.
int isgraph (int c); c bosluk karakteri haricinde bir yazdirma degeri ise dogru bir
deger,degilse 0 d�nd�r�r.
Karakter k�t�phanesinden fonksiyonlar kullanirken <ctype.h> �nc� dosyasini programiniza dahil
edin.
Sekil 8.2, isdigit, isalpha, isalnum ve isxdigit fonksiyonlarini g�stermektedir. isdigit
fonksiyonu, arg�maninin bir rakam ( 0-9 ) olup olmadigina karar verir. isalpha, arg�maninin
b�y�k harf ( A-Z ) ya da k���k harf ( a-z ) olup olmadigina karar verir. isalnum fonksiyonu,
arg�maninin b�y�k harf, k���k harf ya da rakam olup olmadigina karar verir. isxdigit
fonksiyonu, arg�maninin onaltilik sistemde rakam degeri ( A-F,a-f,0-9 ) olup olmadigina
karar verir.
Sekil 8.2, her fonksiyonla ( ?: ) kosullu operat�r�n� kullanarak, test edilen her karakter i�in
operat�rle birlikte kullanilan stringlerden hangisinin yazdirilacagina karar verir. �rnegin,
isdigit(�8�) ? �8 bir rakamdir�: �8 bir rakam degildir�
deyimi eger �8� rakam ise ( yani isdigit dogru bir deger d�nd�r�yorsa), �8 bir rakamdir �
stringinin yazdirilacagini ve eger �8� rakam degilse (yani isdigit 0 degerini d�nd�r�yorsa) �8
bir rakam degildir� stringinin yazdirilacagini belirtir.
*


#include<stdio.h>
#include<ctype.h>
#include<iostream>
#include<cstdlib>
using namespace std;
int main( ){
	
	double a,c;
	int b;
	a=atof("9");
	b=atoi("5");
	c=a/b;
	cout<<c;
	return 0;
}*/



/*#include<stdio.h>
#include<ctype.h>
#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int main( ){
	double d;
	char *a="45azer",*b;
	d=strtod(a,&b);
	cout<<d<<endl<<b;
	
	return 0;
}
*/

#include <stdio.h>
int main( )
{
char cumle[ 80 ];
void ters( const char * const );

printf( "Metin girisi yapiniz:\n" );
gets( cumle );
printf( "\nGirdiginiz metin tersten yazildiginda:\n" );
ters( cumle);
return 0;}
void ters( const char * const sPtr ){

if ( sPtr[ 0 ] == '\0' )
return;
else {
ters( &sPtr[ 1 ] );
putchar( sPtr[ 0 ] );
}}



