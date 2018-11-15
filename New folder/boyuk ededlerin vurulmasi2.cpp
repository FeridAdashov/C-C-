#include<iostream>
#include<conio.h>
#include<cmath>
#include<cstdlib>
using namespace std;
const int n=10000;
int main(){
	short a[n]={0},b[n]={0},c[n]={0},d[n]={0},i,i1,j,j2,k,t1,t,m,f,bireded,s=-1;
	cout<<"~~~~~~~~~~~Yuksek dereceli hasiller hesabi~~~~~~~~~~~~~\nBirinci eded nece reqemli olsun: ";
	scanf("%d",&i); t1=i;
	
	printf("ededi reqemler arasinda bosluq qoymaqla daxil et:\n");
	for(j=n-i;j<n;j++)
		{
		scanf("%d",&a[j]);
		c[j]=a[j];
		}
		
	cout<<"\nikinci eded nece reqemli olsun: "; 
	scanf("%d",&i);
	
	cout<<"Eyni qayda ile Ikinci ededi daxil edin:\n";
	for(j=n-i;j<n;j++)
		scanf("%d",&b[j]);
		
	for(j2=n-1;j2>n-i-1;j2--)
	{
		s++;
		
			for(int x=0;x<=s;x++){
					
						for(j=0;j<n;j++)
							{	m=j;
								if(c[j]*b[j2]<10) c[j]*=b[j2];
								else {
								t=(c[j]*b[j2])/10;	
								c[j]=(c[j]*b[j2])%10;
								if(c[j-1]+t<10) c[j-1]+=t;
								else
								while(t>0){
									f=(c[m-1]+t)/10;
									c[m-1]=(c[m-1]+t)%10;
									t=f;
									m--;
									}
								}
							}
						b[j2]=10;	
				}
				
					for(i1=0;i1<n;i1++)
					{	m=i1;
						if(c[i1]+d[i1]<10) d[i1]=c[i1]+d[i1];
						else 
						{	
							t=(c[i1]+d[i1])/10;
							d[i1]=(c[i1]+d[i1])%10;
							
							if(d[m-1]+t<10) d[m-1]+=t;
							else
							while(t>0)
							{
								f=(d[m-1]+t)/10;
								d[m-1]=(d[m-1]+t)%10;
								t=f;
								m--;
							}
						}
					}
					for(j=n-t1;j<n;j++)
					c[j]=a[j];
	}
		
		i=0;
	while(d[i]==0) i++;
	while(i<n)
	{
		printf("%d",d[i]);
		i++;
	}
	
	scanf("%d", &i);
	
	return 0;
}
	

