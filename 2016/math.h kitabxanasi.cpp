#include <stdio.h>
#include <math.h>
int main()
{
	printf("asin(1) = %f  asin(0) = %f  asin(-1) = %f\n", asin(1), asin(0), asin(-1));
	printf("acos(1) = %f  acos(0) = %f  acos(-1) = %f\n", acos(1), acos(0), acos(-1));
	printf("atan(1) = %f  atan(0) = %f  atan(-1) = %f\n", atan(1), atan(0), atan(-1));
	printf("atan2(1, 1) = %f  atan2(1, 2) = %f  atan2(-1, 2) = %f\n", atan2(1, 1), atan2(0, 2), atan2(-1, 1));
	printf("exp(1) = %f\n", exp(1));
	printf("sinh(2) = %f\n", sinh(2));
	printf("fabs(-1.5) = %f\n", fabs(-1.5));
	printf("fmod(7.3, 2) = %f\n", fmod(7.3, 2));
	int x;
	frexp(8.0, &x);
	printf("frexp(8, 2) = %d\n", x);
	printf("ldexp(5, 2) = %f\n", ldexp(5, 3));//5 * (2 ^ 3) = 40
	printf("%lf\n", HUGE_VAL);
	
	
	return 0;
}
