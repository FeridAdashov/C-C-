#include<iostream>
#include<time.h>
#include <unistd.h>
#include<Windows.h>
using namespace std;
int main(){system("color 0a");
	int x1, x2, i, j;
	char a[40][40]={" "};
	srand(time(NULL));
while(1){
	system("cls");
	for(int o = 0; o < 30; o++)
	{
			x1 = rand()%40;
			x2 = rand()%40;
			a[x1][x2]='.';
	}


	for(i=0;i<40;i++)
	{   
		for(j=0;j<40;j++)
		{
			cout<<a[i][j];
			a[i][j]=' ';
		}
		cout<<endl;
	}
	sleep(1);
}
	return 0;
}
