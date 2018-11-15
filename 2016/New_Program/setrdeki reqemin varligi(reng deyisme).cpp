#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

bool axtar(char* s, int n)
{
	for (int i = 0; i < n; i++)
		if (s[i] >= '0' && s[i] <= '9') return true;
		return false;
}

int main()
{
	char ch, str[1000] = "\0";
	int i = 0;

	while (true)
	{
		ch = _getch();
		str[i] = ch;
		if (ch == 8)
		{
			i--;
			if (i < 0)i = 0;
			system("cls");
			str[i] = '\0';
			printf("%s", str);
			if (axtar(str, i)) system("color 7");
			else system("color a");
		}
		else
		{
			if (axtar(str, i + 1))
			{
				system("cls");
				printf("%s", str);
				system("color 7");
			}
			else
			{
				system("cls");
				printf("%s", str);
				system("color a");
			}
			i++;
		}
		
		
	}
	

	return 0;
}
