#include<iostream>
#include<cstring>
#define n 50
using namespace std;


int main(){
	
	int cerr[2][3][2][4];
	
	for(int a=0; a<2; a++)
		{
			for(int b=0; b<3; b++)
			{
				for(int c=0; c<2; c++)
				{
					for(int d=0; d<4; d++)
					{
						cerr[a][b][c][d]=4;
					}
				}
			}
		}
		int s=0;
	for(int a=0; a<2; a++)
		{
			for(int b=0; b<3; b++)
			{
				for(int c=0; c<2; c++)
				{
					for(int d=0; d<4; d++)
					{
						cout<<cerr[a][b][c][d]<<endl;
						s++;
					}
				}
			}
		}
	cout<<endl<<s;
	
	   return 0;
}

