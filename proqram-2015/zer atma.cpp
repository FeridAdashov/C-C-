#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
	
	int a[13]={0},i,x,y;
	
	srand(time(NULL));
	
	for(i=0;i<3600;i++)
		{
			x = rand()%6 + 1;
			y = rand()%6 + 1;
			a[x+y]++;
		}
	
	for(i=1;i<13;i++)
		//cout<<"Xal "<< i << "  " << a[i] << "  defe yigilib" << endl;
		printf("Xal %-5d  %-5d  defe yigilib\n",i,a[i]);
	return 0;
}
