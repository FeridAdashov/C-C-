//Setrde en qisa uzunluga malik sozleri cixisa vermek

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char setr[200];
	int say, i, j, s1 = INT_MAX, s2;
	
	
	cout << "Setri daxil et: ";
	gets(setr);
	
	
	for(i = 0; i < strlen(setr); i++)	
		 {
		 	s2 = 0;
		 	while(setr[i] != ' ' && i < strlen(setr)) //en qisa sozun uzunlugunu tapiram
		 	{
		 		i++;
		 		s2++;
			}
			if(s2 < s1 && s2 != 0)
			  s1 = s2;
		 }
	
		for(i = 0; i < strlen(setr); i++)	
		 {
		 	s2 = 0;
		 	j = i;
		 	
		 	while(setr[i] != ' ' && i < strlen(setr)) //her sozun uzunlugunu tapiram
		 	{
		 		i++;
		 		s2++;
			}
			
			if(s2 == s1)         //sozun uzunlugun en qisa uzunluqdadirsa
			  {
			  	for(int k = j; k < i; k++)
			  	cout << setr[k];
				cout << endl;
			  }
			  
		 }
	
	return 0;
}
