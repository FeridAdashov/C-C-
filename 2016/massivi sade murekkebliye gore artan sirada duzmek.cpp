#include <stdio.h>
#include <malloc.h>

bool sade(int x)
{
	for(int i = 2; i <= x / 2; ++i)
	if(!(x % i)) return false;
	return true;
}

int main()
{
	int size, size1 = 0, *p, *q, i;
	puts("Massivin olcusu: ");
	scanf("%d", &size);
	
	p = (int*)malloc(size * sizeof(int));
	q = (int*)malloc(sizeof(int));
	
	puts("Massivi daxil et:");
	for(i = 0; i < size; i++)
	scanf("%d", p + i);
	
	for(i = 0; i < size; i++)
	{
		if(p[i] != -1 && p[i] != 0 && p[i] != 1)
		{
			q = (int*)realloc(q, (size1 + 1) * sizeof(int));
			q[size1] = p[i];
			++size1;
		}
	}
	free(p);
	for(i = 0; i < size1; i++)
	{
		int j = i;
		if(sade(q[i]))
		while(j > 0 && (q[j - 1] > q[j] || !sade(q[j - 1])))
		{
			int t = q[j];
			q[j] = q[j - 1];
			q[j - 1] = t;
			--j;
		}
		else
		while(j > 0 && (q[j - 1] > q[j] || sade(q[j - 1])))
		{
			int t = q[j];
			q[j] = q[j - 1];
			q[j - 1] = t;
			--j;
		}
	}
	
	for(i = 0; i < size1; i++)printf("%d ", q[i]);
	
	
	return 0;
}
