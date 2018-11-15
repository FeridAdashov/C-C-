#include <stdio.h>
#include <malloc.h>
int main()
{
	long long a;
	char *p = (char*)malloc(6);
	int say = 0;
	scanf("%lld", &a);
	
	do{
		
		 switch(a % 16)
    {
    	case 1: *(p + say) = '1';
    	break;
    	case 2: *(p + say) = '2';
    	break;
    	case 3: *(p + say) = '3';
    	break;
    	case 4: *(p + say) = '4';
    	break;
    	case 5: *(p + say) = '5';
    	break;
    	case 6: *(p + say) = '6';
    	break;
    	case 7: *(p + say) = '7';
    	break;
    	case 8: *(p + say) = '8';
    	break;
    	case 9: *(p + say) = '9';
    	break;
    	case 10: *(p + say) = 'a';
    	break;
    	case 11: *(p + say) = 'b';
    	break;
    	case 12: *(p + say) = 'c';
    	break;
    	case 13: *(p + say) = 'd';
    	break;
    	case 14: *(p + say) = 'e';
    	break;
    	case 15: *(p + say) = 'f';
    	break;
	}
		a /= 16;
		++say;
	}while(a > 0);
   
   for(int i = say - 1; i >= 0; i--)
   printf("%c", *(p + i));
	return 0;
}
