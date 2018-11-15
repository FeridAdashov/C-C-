#include <stdio.h>
int main()
{
	int n, m; 
	printf("Reqem sayi 5 - den cox olmayan eded daxil edin: ");
	scanf("%d", &n);
	switch(n / 10000)
	{
		case 1:printf("on ");
		break;
		case 2:printf("iyirmi ");
		break;
		case 3:printf("otuz ");
		break;
		case 4:printf("qirx ");
		break;
		case 5:printf("elli  ");
		break;
		case 6:printf("altmis ");
		break;
		case 7:printf("yetmis ");
		break;
		case 8:printf("seksen ");
		break;
		case 9:printf("doxsan ");
		break;
	}
	switch((n / 1000) % 10)
	{
		case 1:if(n > 10000) printf("bir ");
		break;
		case 2:printf("iki ");
		break;
		case 3:printf("uc ");
		break;
		case 4:printf("dord ");
		break;
		case 5:printf("bes ");
		break;
		case 6:printf("alti ");
		break;
		case 7:printf("yeddi ");
		break; 
		case 8:printf("sekkiz ");
		break;
		case 9:printf("doqquz ");
		break;
	}
	if(n / 1000)
	printf("min ");
	switch((n / 100) % 10)
	{
		case 1:printf("yuz ");
		break;
		case 2:printf("iki yuz ");
		break;
		case 3:printf("uc yuz ");
		break;
		case 4:printf("dord yuz ");
		break;
		case 5:printf("bes yuz ");
		break;
		case 6:printf("alti yuz ");
		break;
		case 7:printf("yeddi yuz ");
		break;
		case 8:printf("sekkiz yuz ");
		break;
		case 9:printf("doqquz yuz ");
		break;
	}
	switch((n / 10) % 10)
	{
		case 1:printf("on ");
		break;
		case 2:printf("iyirmi ");
		break;
		case 3:printf("otuz ");
		break;
		case 4:printf("qirx ");
		break;
		case 5:printf("elli ");
		break;
		case 6:printf("altmis ");
		break;
		case 7:printf("yetmis ");
		break;
		case 8:printf("seksen ");
		break;
		case 9:printf("doxsan ");
		break;
	}
		switch(n % 10)
	{
		case 1:printf("bir");
		break;
		case 2:printf("iki");
		break;
		case 3:printf("uc");
		break;
		case 4:printf("dord");
		break;
		case 5:printf("bes");
		break;
		case 6:printf("alti");
		break;
		case 7:printf("yeddi");
		break;
		case 8:printf("sekkiz");
		break;
		case 9:printf("doqquz");
		break;
	}
	return 0;
}
