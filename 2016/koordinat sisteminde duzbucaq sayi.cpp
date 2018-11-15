#include <stdio.h>
#include <cmath>
float mesafe(float x1, float y1, float x2, float y2)
{
	return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

int main()
{
	float x1, y1, x2, y2, x3, y3, x4, y4;
	int say = 0;
	
	scanf("%f%f%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
	
	if(mesafe(x1, y1, x2, y2) + mesafe(x2, y2, x3, y3) == mesafe(x1, y1, x3, y3)) ++say;
	if(mesafe(x2, y2, x3, y3) + mesafe(x4, y4, x3, y3) == mesafe(x2, y2, x4, y4)) ++say;
	if(mesafe(x1, y1, x4, y4) + mesafe(x4, y4, x3, y3) == mesafe(x1, y1, x3, y3)) ++say;
	if(mesafe(x1, y1, x2, y2) + mesafe(x1, y1, x4, y4) == mesafe(x2, y2, x4, y4)) ++say;
	
	printf("%d", say);
	
	return 0;
}
