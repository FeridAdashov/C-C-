#include <time.h>

static unsigned int seed = 1;
void _srand_(unsigned int seed_)
{
	seed = seed_;
}
unsigned int _rand_()
{
	static unsigned int max = 2147479999;
	
	max += seed;
	seed += max;
	return max;
}
