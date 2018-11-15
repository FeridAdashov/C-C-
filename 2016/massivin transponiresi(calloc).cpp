//massivi transponire etmek ve ededler polindromsa 1 vahid artirme
//eks halda ededden boyuk en kicik polindrom ededle evez etme
#include <stdio.h>
#include <malloc.h>
int main()
{
	int n, i, j, x, y;
	printf("Olcunu daxil et: ");
	scanf("%d", &n);
	int **a = (int **)calloc(n, sizeof(int));
	
	for(i = 0; i < n; ++i)
	*(a + i) = (int *)calloc(n, sizeof(int));
	
	printf("\nMassivi daxil edin:\n");
	for(i = 0; i < n; ++i)
		for(j = 0; j < n; ++j)
		scanf("%d", &a[i][j]);
		
	for(i = 0; i < n; ++i)     // tarnsponire edilir...
		for(j = i + 1; j < n; ++j)
		{
			a[i][j] += a[j][i];
			a[j][i] = a[i][j] - a[j][i];
			a[i][j] = a[i][j] - a[j][i];
		}
		
	for(i = 0; i < n; ++i)
		for(j = 0; j < n; ++j)
		{
			y = 0;
			x = a[i][j];
			while(x != 0)
			{
				y = y * 10 + x % 10;
				x /= 10;
			}
			if(y == a[i][j]) a[i][j]++;
			else
			{
				int k = a[i][j], p, t;
				
				do{
					k++;
					t = k;
					p = 0;
					a[i][j] = k;
					while(t != 0)
					{
						p = p * 10 + t % 10;
						t /= 10;
					}
				}while(k != p);
			}
		}
		
	printf("\nYeni massiv:\n");
	for(i = 0; i < n; ++i)
	{
		for(j = 0; j < n; ++j)
		printf("%d ", a[i][j]);
		printf("\n");
	}

	return 0;
}
