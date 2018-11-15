#include <stdio.h>
#define N 5

bool yoxla(int i, int j)
{
	while (j != 0)
	{
		if (j % 10 == i)return true;
		j /= 10;
	}
	return false;
}

int main()
{
	int mas[N], eded, saxla, reqem;

	puts("Massivi daxil et:");
	for (int i = 0; i < N; ++i)
		scanf("%d", &mas[i]);

	puts("Ededi daxil et:");
	scanf("%d", &eded);
	saxla = eded;
	for (int i = 0; i < N; ++i)
	{
		eded = saxla;
		while (eded != 0)
		{
			reqem = eded % 10;
			if (yoxla(reqem, mas[i]))
			{
				printf("%d ", mas[i]);
				break;
			}
			eded /= 10;
		}
	}

	return 0;
}
