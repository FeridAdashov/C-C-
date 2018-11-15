#include <stdio.h>

int main()
{
	char str[100];
	int i = 0, max = 0, eded;
	bool b = false;
	gets(str);

	while (str[i])
	{
		eded = 0;
		while (str[i] >= '0' && str[i] <= '9' && str[i])
			eded = eded * 10 + str[i++] - '0';

		if (eded > max)max = eded;
		i++;
	}
	printf("%d\n\n", max);
	return 0;
}
