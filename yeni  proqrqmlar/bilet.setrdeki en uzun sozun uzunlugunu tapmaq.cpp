//Verilmis setrde en uzun sozun uzunlugunu tapan proqram

#include<iostream>
#include<cstring>
using namespace std;

	int main()
	{
		char setr[100];
		int i, s1=0, s2;
		
		cout << "setri daxil et: ";
		gets(setr);
		
		for(i = 0; i < strlen(setr); i++)	
		 {
		 	s2 = 0;
		 	while(setr[i] != ' ' && i < strlen(setr))
		 	{
		 		i++;
		 		s2++;
			}
			if(s2 > s1)
			  s1 = s2;
		 }
		
		cout << "\nBu setrdeki en uzun sozun uzunlugu: " << s1 << " dir";
		
		return 0;
	}
