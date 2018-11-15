//Verilmis setrde 3 herfli sozlerin sayi

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
			if(s2 % 3 == 0)
			  s1++;
		 }
		
		cout << "\nBu setrde 3 herfli sozlerin sayi: " << s1 << " dir";
		
		return 0;
	}
