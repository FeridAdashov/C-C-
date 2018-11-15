#include <stdio.h>
#include <malloc.h>
int main (){
   
   int n;
   scanf("%d", &n);
   
   for(int i = n; i > 0; i--)
   {
   	  printf("%*c", i, '*');
   	  
   	  for(int j = 2 * (n - i) - 1; j >= 0; j--)
   	  printf("*");
   	  
   	  printf("\n");
   }
 	printf("\n\n");
 	for(int i = 1; i < n * n + 1; i++)
 	{
 		printf("*");
 		if(i % n == 0)
 		printf("\n");
	}
 	
 	
   return 0;
}
