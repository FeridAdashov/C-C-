#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
const int n=10;
int main(){
int a,b,massiv[n],i;
float massiv1[n];
srand(time(NULL));
cout<<"Intervali daxil et: ";
cin>>a>>b;
for(i=0;i<10;i++)
massiv[i]=rand()%(b-a+1)+a;
for(i=0;i<10;i++)
massiv1[i]=(float)(rand()%(b-a+1))/RAND_MAX+a;

cout<<"Tam qiymetli massiv: ";
for(i=0;i<10;i++)
cout<<massiv[i]<<" ";
cout<<"\nHeqiqi qiymetli massiv: ";
for(i=0;i<10;i++)
cout<<massiv1[i]<<" ";
return 0;
}
