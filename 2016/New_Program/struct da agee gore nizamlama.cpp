#include <stdio.h>
#define N 2

struct human
{
	char name[20], surname[20];
	int age;
};

int main()
{
	struct human hs[N];
	for(int i = 0; i < N; i++)
	{
		scanf("%s", hs[i].name);
		scanf("%s", hs[i].surname);
		scanf("%d", &hs[i].age);
	}
	int max = hs[0].age, min = hs[0].age, m, n;
	human t;
	for(int i = 1; i < N; i++)
	{
		if(hs[i].age < min)
		{
			 min = hs[i].age;
			 m = i;
		}
		if(hs[i].age > max)
		{
			 max = hs[i].age;
			 n = i;
		}
	}
	
	t = hs[m];
	hs[m] = hs[n];
	hs[n] = t;
	
	for(int i = 0; i < N; i++)
	{
		printf("%-10s ", hs[i].name);
		printf("%-10s ", hs[i].surname);
		printf("%-10d\n", hs[i].age);
	}
	
	
	return 0;
}
