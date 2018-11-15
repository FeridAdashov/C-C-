#include<iostream>
#include<Windows.h>
using namespace std;
int main(){int a;
system("color a");
int fib[20],i;
fib[0]=0;
fib[1]=1;
for(i=0;i<=15;i++)
{
	fib[i+2]=fib[i]+fib[i+1];
	cout<<"Fibonacci ededi "<<i<<" : "<<fib[i]<<endl;
}

return 0;
}
