#include <time.h>
#define _sleep_(a) clock_t second1, second2 = 0;\
	second1 = clock();\
	while(second2 - second1 <= a)\
	second2 = clock(); 

