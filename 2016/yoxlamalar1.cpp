#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;
/*int main() {
	
	char ad[] = "ferid";
	wchar_t ad1[] = L"ferid";
	wchar_t x = 65;
	char x1 = 65;
	wcout << x1;
	wcout << "ferid\n";
	wcout << wcslen(ad1) << "\n";
	cout << strlen(ad) << "\n\n";  
    
    wchar_t ad2[20] = L"Ferid", ad_copy[10];
    wcscpy(ad_copy , ad2);
    wcout << ad_copy << "\n\n";
    
    wcscat(ad2 , L" ");
    wcscat(ad2 , ad1);
    wcout << L"Birlewme: " << ad2 << "\n\n\n";
    
    wchar_t setr[] = L"Men,Adasov,Ferid ";
    wchar_t bolen[] = L",";
    wchar_t *parca = wcstok(setr , bolen);
    while(parca)
    {
    	wcout << parca << "\n";
    	parca = wcstok(NULL , bolen);
	}
	 
 return 0;
}*/
int main()
{
	int a = -2, b = -1, e = 2;
	++a = (++(++(++e)));
	e = e++ - a - ++b;
	printf("a = .%5d.", a);
	printf("\nb = .%7d.\n", b);
	printf("e = .%9d.", e);
	putchar(10);
}
