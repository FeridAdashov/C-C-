#include <time.h>
#define _sleep_(a) time_t second1, second2 = 0;\
	second1 = time(NULL);\
	while(second2 - second1 != a)\
	second2 = time(NULL);
