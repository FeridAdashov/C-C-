#include<stdio.h>
#include<malloc.h>
int main()
{
	short n = 7 , m = 7;
	scanf("%d%d", &n, &m);
	char*c = (char*)calloc(100, 1);

	gets(c);

	char **a = (char**)calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
		a[i] = (char*)calloc(m, sizeof(char));

	int ucol = m - 1, dcol = 0, lrow = 0, rrow = n - 1, count = 0, i, index = 0;
	while (count < m * n)
	{
		for (i = dcol; i <= ucol && count < m * n; i++)
		{
			if (c[index] == '\0') index = 0;
			a[lrow][i] = c[index++];
			count++;
		}
		lrow++;
		
		for (i = lrow; i <= rrow && count < m * n; i++)
		{
			if (c[index] == '\0') index = 0;
			a[i][ucol] = c[index++];
			count++;
		}
		ucol--;
				
		for (i = ucol; i >= dcol && count < m * n; i--)
		{
			if (c[index] == '\0') index = 0;
			a[rrow][i] = c[index++];
			count++;
		}
		rrow--;
		
		for (i = rrow; i >= lrow && count < m * n; i--)
		{
			if (c[index] == '\0') index = 0;
			a[i][dcol] = c[index++];
			count++;
		}
		dcol++;
	}
	
	printf("\n\n");
	for (i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			printf("%c", a[i][j]);
		printf("\n");
	}

	return 0;
}
