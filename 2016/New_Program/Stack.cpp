#include <stdio.h>
#include <malloc.h>

class stack{
	int *p, size;
public:
	stack()
	{
		p = (int*)calloc(1, sizeof(int));
		size = -1;
	}
	void push(int i)
	{
		++size;
		p[size] = i;
		p = (int*)realloc(p, (size + 2) * sizeof(int));
	}
	int pop()
	{
		if(size < 0)
		{
			p = (int*)realloc(p,sizeof(int));
			size = -1;
			return -1;
		}
		else 
		{
			int x = p[size];
			p = (int*)realloc(p, size * sizeof(int));
			--size;
			return x;
		} 
	}
};


int main()
{
	stack ob;
	for(int i = 0; i < 13; ++i)
	ob.push(i + 1);
	for(int i = 0; i < 13; ++i)
	printf("%d  ", ob.pop());
	
	return 0;
}

