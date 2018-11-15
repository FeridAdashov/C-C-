#include <iostream>
using namespace std;

class node {
public:
	int el;
	node() { next = NULL; }
	node *next;
};

size_t number(node* p)
{
	node* run = p;
	size_t s = 0;
	while (run->next)
	{
		s++;
		run = run->next;
	}
	return s;
}

void push_end(node* p, int e)
{
	while (p->next) p = p->next;
	p->el = e;
	p->next = new node;
	p->next->next = NULL;
}

void push_head(node** p, int e)
{
	if (!((*p)->next))
	{
		(*p)->el = e;
		(*p)->next = new node;
		(*p)->next->next = NULL;
		return;
	}
	node* start = new node;
	start->el = e;
	start->next = *p;
	*p = start;
}
void push_pos(node* p, int pos, int e)
{
	if (number(p) < pos || number(p) == 0)
	{
		push_end(p, e);
		return;
	}
	if (pos < 0)
	{
		push_head(&p, e);
		return;
	}
	node* run1 = p, *run2 = p;
	node* new_el = new node;
	new_el->el = e;
	for (int i = 0; i < pos; ++i) run1 = run1->next;
	new_el->next = run1;
	for (int i = 0; i < pos - 1; ++i) run2 = run2->next;
	run2->next = new_el;
}
void pf_node(node* p)
{
	node* start = p;
	if (!p->next)
	{
		printf("Siyahi Bosdur!(element elave edin)\n");
		return;
	}
	while (start->next)
	{
		cout << start->el << " ";
		start = start->next;
	}
	printf("\n");
}

bool search_el(node* p, int e)
{
	node* run = p;
	while (run->next)
	{
		if (run->el == e)
		{
			return true;
		}
		run = run->next;
	}
	return false;
}

void reverse_node(node* p)
{
	node* run = p;
	int n = number(p), i;
	int* mas = new int[n];
	for (i = n - 1; (i >= 0 && run->next); i--)
	{
		mas[i] = run->el;
		run = run->next;
	}
		
	run = p;
	i = 0;
	while (run->next)
	{
		run->el = mas[i++];
		run = run->next;
	}
}

void del_el(node** p, int pos)
{
	if (pos <= 0) *p = (*p)->next;
	else if (pos >= number(*p) - 1)
	{
		node* run = *p;
		for (unsigned i = 0; i < number(*p) - 1; ++i)run = run->next;
		run->next = NULL;
	}
	else
	{
		node* run = *p;
		for (unsigned i = 0; i < pos - 1; ++i)run = run->next;
		run->next = run->next->next;
	}
}

void pf_menu()
{
	printf("\n%20s\n", "MENU");
	printf("%25s\n", "1.Siyahini cap et");
	printf("%43s\n", "2.Siyahinin basina element elave et");
	printf("%43s\n", "3.Siyahinin sonuna element daxil et");
	printf("%43s\n", "4.Herhansi indekse element daxil et");
	printf("%32s\n", "5.Siyahida element axtar");
	printf("%31s\n", "6.Siyahidan element sil");
	printf("%32s\n", "7.Siyahini tersine cevir");
	printf("%33s\n", "8.Siyahidaki element sayi");
	printf("%22s\n", "9.Siyahini sil");
	printf("%25s\n", "10.Ekrani temizle");
	printf("%17s\n", "11.Cixis\n");
}

int main()
{
	node *ob;
	unsigned sec = 0;
	bool b = true;
	ob = new node;
	while (b)
	{
		pf_menu();
		printf("Secim edin: ");
		scanf("%du", &sec);
		switch (sec)
		{
		case 1: pf_node(ob);
			break;
		case 2: {
			int el;
			printf("Elementi daxil et: ");
			scanf("%d", &el);
			push_head(&ob, el);
		}break;
		case 3: {
			int el;
			printf("Elementi daxil et: ");
			scanf("%d", &el);
			push_end(ob, el);
		}break;
		case 4: {
			int el, pos;
			printf("Elementi daxil et: ");
			scanf("%d", &el);
			printf("Indeksi daxil et: ");
			scanf("%d", &pos);
			push_pos(ob, pos, el);
		}break;
		case 5: {
			int el;
			printf("Hansi element axtarilsin: ");
			scanf("%d", &el);
			if (search_el(ob, el))printf("Element tapildi");
			else printf("Element tapilmadi");
		}break;
		case 6: {
			int pos;
			printf("Silinecek Elementin indeksini daxil et: ");
			scanf("%d", &pos);
			del_el(&ob, pos);
		}break;
		case 7: reverse_node(ob);
			break;
		case 8: printf("Siyahidaki element sayi: %d", number(ob));
			break;
		case 9: ob->next = NULL;
			break;
		case 10: system("cls");
			break;
		default: b = false;
		}
	}
	return 0;
}

