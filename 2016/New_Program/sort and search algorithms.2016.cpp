#include <stdio.h>

bool binary_search(int* p, int n, int el)
{
	int begin = 0, end = n - 1, mid = (begin + end) / 2;
	while (begin <= mid && end >= mid)
	{
		if (el == p[mid]) return 1;
		if (el < p[mid]) end = mid - 1;
		if (el > p[mid]) begin = mid + 1;
		mid = (begin + end) / 2;
	}
	return 0;
}

void selection_sort(int* p, int n)
{
	int min, i = 0, j, index;
	for (; i < n; ++i)
	{
		min = p[i];
		index = i;
		for (j = i + 1; j < n; ++j)
			if (min > p[j]) {
				min = p[j];
				index = j;
			}
		if (index != i)
		{
			p[i] = p[i] ^ p[index];
			p[index] = p[i] ^ p[index];
			p[i] = p[i] ^ p[index];
		}		
	}
}

void merge(int a[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	int *L = new int[n1], *R = new int[n2];

	for (i = 0; i < n1; i++)
		L[i] = a[l + i];
	for (j = 0; j < n2; j++)
		R[j] = a[m + 1 + j];

	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			a[k] = L[i];
			i++;
		}
		else
		{
			a[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1)
	{
		a[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		a[k] = R[j];
		j++;
		k++;
	}
}

void merge_sort(int a[], int l, int r)
{
	if (l < r)
	{
		int m = (r + l) / 2;

		merge_sort(a, l, m);
		merge_sort(a, m + 1, r);
		merge(a, l, m, r);
	}
}


int main()
{

	return 0;
}


