#include <stdio.h>
#include <malloc.h>
int main()
{
	int n = 0, i = 0, say = 0;
	char *p = (char*)malloc(20), c;
	printf("ededin sozlerini arada bir bosluq qoymaqla daxil edin!!!\n");
	gets(p);
	c = *p;
	while(*(p + i))
	{
		if(*(p + i) == ' ')say++;
		i++;
	}
	if(say > 0 && *p == 'm') 
	{
		printf("-");
		while(*p != ' ')p++;
		p++;
	}
			switch(*p)
		{	if(say == 1 && c == 'm')break;
			case 'o':
			if(*(p + 1) == 'n') n += 10;
			else n += 30;
			break;
			case 'i': n += 20;
			break;
			case 'q': n += 40;
			break;
			case 'e': n += 50;
			break;
			case 'a': 
			if(*(p + 5) == 's')n += 60;
			break;
			case 'y': 
			if(*(p + 2) == 't')n += 70;
			break;
			case 's':
			if(*(p + 5) == 'n') n += 80;
			break;
			case 'd':
			if(*(p + 2) == 'x') n += 90;
			break;
		}

	if((say == 1 && c != 'm') || say == 2)
	{
		while(*p != ' ')p++;
		p++;
	}
	
	switch(*p)
	{
		case 'b':
		if(*(p + 1) == 'i') n += 1;
		else  n += 5;
		break;
		case 'i':
		if(*(p + 1) == 'k') n += 2;
		break;
		case 'u': n += 3;
		break;
		case 'a': 
		if(*(p + 3) == 'i')n += 6;
		break;
		case 'y': 
		if(*(p + 2) == 'd')n += 7;
		break;
		case 's':
		if(*(p + 5) == 'z') n += 8;
		break;
		case 'd':
		if(*(p + 2) == 'r')n += 4;
		else if(*(p + 2) == 'q')n += 9;
		break;
	}
	
	printf("%d", n);
	return 0;
}
