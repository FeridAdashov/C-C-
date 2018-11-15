#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
main()
{
	char s1[20],s2[30];
	printf("Enter a string: ");
	scanf("%[^a-c]%s" , s1 , s2);
	printf("%s\t%s" , s1 , s2);
	
	scanf("%[a-c]%s" , s1 , s2);
	printf("%s\t%s" , s1 , s2);
	
	return 0;
}
/*scanf daxiletm?sind? [char - char] ex: [c - f] kimi formatlarda var.
bu formatda bizd?n c - den f - ? kimi olan simvollar yigini t?l?b edir.
 %^[char - char] formatida movcuddur.
 Burada daxiletmede bu araliqdaki simvol daxil edilene qeder daxiletme davam edir eks halda dayanir.
	char s1[20],s2[30];
	scanf("%[^a-c]%s" , s1 , s2);
	printf("%s\t%s" , s1 , s2);
burada " Ferid Adasov" setri daxil edilse s1 - ? "Ferid Ad"
s2 - y?  "asov" menimsedilecek.*/

