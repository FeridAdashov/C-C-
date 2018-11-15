//Verilmis setrde uzunlugu sade edede beraber olan sozlerin sayi

#include<iostream>
#include<cstring>
#include <cmath>
using namespace std;

bool sade(int n)
{
	int i;
	
	if(n == 1 || n == 0) return false;
	
	for( i = 2; i <= (int)sqrt(n); i++)
	if(n % i == 0) return false;
	
	return true;
	
}

	int main()
	{
		char setr[100];
		int i, s1=0, s2;
		
		cout << "Setrinizi daxil edin: ";
		gets(setr);
		
		for(i = 0; i < strlen(setr); i++)	
		 {
		 	s2 = 0;
		 	while(setr[i] != ' ' && i < strlen(setr))
		 	{
		 		i++;
		 		s2++;
			}
			if(sade(s2))
			  s1++;
		 }
		
		cout << "\nVerilmis setrde uzunlugu sade edede beraber olan sozlerin sayi: " << s1 << " dir";
	
		return 0;
	}
