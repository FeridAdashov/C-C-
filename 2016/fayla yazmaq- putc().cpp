#include <stdio.h>

int main ()
{
  FILE * pFile;
  int c;

  pFile = fopen("alphabet.txt","wt");
  for (c = 0 ; c <= 255 ; c++) 
  {
    putc (c , pFile);
    putc ('\n', pFile);
  }
  fclose (pFile);
  return 0;
}
