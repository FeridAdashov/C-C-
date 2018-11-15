#include <iostream>
#include <conio.h>

bool check(char* str)
{
	int i = 0;
	if (str[0] == '0' && str[1] != 'x' && str[1] != 'X') return 0;

	if (str[0] == '0' && (str[1] == 'x' || str[1] == 'X'))
		i = 2;

	for (; str[i]; ++i)
		if (!((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f') || (str[i] >= 'A' && str[i] <= 'F')))
			return 0;
	return 1;
}

int main()
{
	char ch, str[1000] = "\0";
	int i = 0;

	while (true)
	{
		ch = _getch();
		
		if (ch == 8)
		{
			i--;
			if (i < 0)i = 0;
			system("cls");
			str[i] = '\0';
			printf("%s", str);
			if (!check(str)) system("color 7");
			else system("color a");
		}
		else
		{
			str[i++] = ch;
			if (!check(str))
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
		}
	}
	return 0;
}
