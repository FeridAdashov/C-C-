#include <iostream>
#include <fstream>
#include <cstring>
#include <malloc.h>

using namespace std;

int main()
{
	int i = 0;
	char a[100], **words = (char**)malloc(sizeof(char*));
	ifstream file("data.txt");	
	
	while(file >> a)
	{
		words = (char**)realloc(words, (i + 1) * sizeof(char*));
		int len = strlen(a);
		words[i] = (char*)malloc(len * sizeof(char));
		
		for(int t = 0; t < len; t++)
		if(ispunct(a[t]))
		{
			for(int x = t + 1; x < len; x++)
			a[x - 1] = a[x];
			a[len - 1] = '\0';
			--t;
			--len;
		}
		int j = 0;
		for(;j <= i; ++j)
		if(strstr(words[j], a))break;
		if(j == i + 1)
		strcpy(words[i++], a);
	}
	
	file.close();
	ofstream file1("data.txt");
	
	for (int j = 0; j < i; j++) file1 << words[j] << " ";
		
	return 0;
}
