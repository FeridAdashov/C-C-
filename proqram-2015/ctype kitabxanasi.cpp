/*#include<stdio.h>
#include<ctype.h>
#include<iostream>
using namespace std;
int main( )
{
printf( "%s\n%s\n%s\n\n", "isdigit için: ",
isdigit( '8' ) ? "8 bir rakamdir" : "8 bir rakam degildir ",
isdigit( '#' ) ? "# bir rakamdir " :"# bir rakam degildir" );
cout<<isgraph( 'o' )<<endl;
printf("%s",islower('M')? "girilen herf kicikdir":"girilen herf boyukdur");
return 0;
}


/*int isdigit ( int c);c bir rakam ise dogru bir deger,degilse 0(yanlis) döndürür.
int isalpha (int c);c bir harf ise dogru bir deger,degilse 0 döndürür.
int iaslnum (int c);c bir harf ya da rakamsa dogru bir deger,degilse 0 döndürür.
int isxdigit (int c);c onaltilik sistemde bir rakam degeri karakteri ise dogru bir
deger,degilse 0 döndürür.(ikilik sistem,sekizlik sistem,onluk sistem ve
onaltilik sistem için daha detayli bilgiyi Ekler E kisminda
bulabilirsiniz.)
int islower ( int c); c küçük bir harf ise dogru bir deger,degilse 0 döndürür.
int isupper (int c); c büyük bir harf ise dogru bir deger,degilse 0 döndürür.
int tolower ( int c); c bir büyük harf ise,tolower c ’yi küçük harfe çevirerek döndürür,
degilse tolower argümani degistirmeden döndürür
int toupper (int c); c küçük harf ise,toupper c ’yi büyük harfe çevirip döndürür,degilse
toupper argümani degistirmeden döndürür.
int isspace (int c); c yeni satir(‘\n’),bosluk(‘ ‘),form besleme(‘\f ’),satir basi(‘\r’),yatay
tab(‘\t’) ya da düsey tab(‘\v’) karakterlerinden biriyse dogru bir deger,
degilse 0 döndürür.
int iscntrl (int c);c bir kontrol degiskeni ise dogru bir deger,degilse 0 döndürür.
int ispunct (int c); c bosluk,rakam ya da harften baska bir yazdirma karakteri ise dogru bir
deger,degilse 0 döndürür.
int isprint (int c); c bosluk (‘ ‘) karakteri de dahil olmak üzere bir yazdirma karakteri ise
dogru bir deger,degilse 0 döndürür.
int isgraph (int c); c bosluk karakteri haricinde bir yazdirma degeri ise dogru bir
deger,degilse 0 döndürür.
Karakter kütüphanesinden fonksiyonlar kullanirken <ctype.h> öncü dosyasini programiniza dahil
edin.
Sekil 8.2, isdigit, isalpha, isalnum ve isxdigit fonksiyonlarini göstermektedir. isdigit
fonksiyonu, argümaninin bir rakam ( 0-9 ) olup olmadigina karar verir. isalpha, argümaninin
büyük harf ( A-Z ) ya da küçük harf ( a-z ) olup olmadigina karar verir. isalnum fonksiyonu,
argümaninin büyük harf, küçük harf ya da rakam olup olmadigina karar verir. isxdigit
fonksiyonu, argümaninin onaltilik sistemde rakam degeri ( A-F,a-f,0-9 ) olup olmadigina
karar verir.
Sekil 8.2, her fonksiyonla ( ?: ) kosullu operatörünü kullanarak, test edilen her karakter için
operatörle birlikte kullanilan stringlerden hangisinin yazdirilacagina karar verir. Örnegin,
isdigit(‘8’) ? “8 bir rakamdir”: ”8 bir rakam degildir”
deyimi eger ‘8’ rakam ise ( yani isdigit dogru bir deger döndürüyorsa), ”8 bir rakamdir ”
stringinin yazdirilacagini ve eger ‘8’ rakam degilse (yani isdigit 0 degerini döndürüyorsa) “8
bir rakam degildir” stringinin yazdirilacagini belirtir.
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



