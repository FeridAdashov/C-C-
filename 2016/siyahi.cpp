#include <stdio.h>
#include <malloc.h>
struct siy_el
{
	int dey;
	int *new_el;
};

int main()
{
	siy_el *my_list, *p, *q;
	
	p = (siy_el*)malloc(sizeof(siy_el));
	my_list = p;
	q = p;
	p->new_el = NULL;
	p = (siy_el*)malloc(sizeof(siy_el));
	q->new_el = (int*)p;
	p->new_el = NULL;
	p = NULL;
	q = NULL;

	p = my_list;
	p->dey = 1;
	p = (siy_el*)p->new_el;
	p->dey = 2;
	p = NULL;
	
	p = my_list;
	printf("%d", p->dey);

	p = (siy_el*)p->new_el;
	printf("%d", p->dey);

	p = NULL;

	return 0;
}


