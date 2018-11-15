#include <stdio.h>
#include <malloc.h>
int main () {
   int n, m, x, y, s = 0, i, j;
   scanf("%d%d%d%d", &n, &m, &x, &y);
   int  **a = (int**)calloc(n, sizeof(int*));
   
   for(i = 0; i < n; i++)
   a[i] = (int *)calloc(m, sizeof(int));
   bool b = true;
   for(i = 0; i < n; i++)
   {
   	  if(b)
   	  	for(j = 0; j < m; j++)
   	  		a[i][j] = s++;
   	  else for(j = m - 1; j >= 0; j--)
   	  			a[i][j] = s++;
   	  b = !b;
   }
  
 	printf("%d", a[x - 1][y - 1]);
    	
   return 0;
}
