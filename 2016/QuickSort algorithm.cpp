#include <stdio.h>
#include <stdlib.h>

void quicksort(int a[], int l, int r)
{
	int i = l, j = r, temp;
	int pivot = a[(l + r) / 2];
	
	while(i <= j)
	{
		while(a[i] < pivot)
			i++;
		while(a[j] > pivot)
			j--;
		if(i <= j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
		//if(l < j) quicksort(a, l, j);
		//if(r > i) quicksort(a, i, r);
	}
}

int main()
{
	int n;
	printf("Nece eded siralanacaq? ");
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++)
	a[i] = rand() % 100;
	
	printf("\n\n");
	for(int i = 0; i < n; i++)
	printf("%d ", a[i]);
	printf("\n\n");
	
	quicksort(a, 0, n - 1);
	
	for(int i = 0; i < n; i++)
	printf("%d ", a[i]);
	return 0;
}
