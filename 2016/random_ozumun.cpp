#include <time.h>
#include <stdio.h>

int random()
{
	int t = clock();
	for(int i = 0; i < 3900000; i++);
	return clock();
}


int main(void) {
	
	for(int i = 0; i < 20; i++)
	printf("%d\n", random() % 7);
	
	
	return 0;
}
