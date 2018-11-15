//Verilmis setrde uzunlugu cut olan sozlerin sayi

#include<iostream>
#include<cstring>
using namespace std;

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
			if(s2 % 2 == 0)
			  s1++;
		 }
		
		cout << "\nBu setrde uzunlugu cut olan sozlerin sayi: " << s1 << " dir";
		
		return 0;
	}
