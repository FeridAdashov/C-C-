#include <stdio.h>

 int main( )
{
 char string1[ 20 ], string2[] = "string literal";
 int i;

 printf("Bir string girin: ");
 scanf( "%s", string1 );
 printf( "string1: %s\nstring2: %s\nkarakterler arasinda boslukla string1:\n",string1, string2 );

 for ( i = 0; string1[ i ] != '\0'; i++ )
 printf( "%c ", string1[ i ] );

 printf( "\n" );
 return 0;
}
