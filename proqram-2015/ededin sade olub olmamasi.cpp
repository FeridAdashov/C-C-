#include<iostream>
using namespace std;
int main(){
	long long int n,i;
	cout<<"eded daxil et: ";
	cin>>n;
	for(i=2;i<n;i++)
	   if(n%i==0)
	{  cout<<n<<" murekkeb ededdir...";
	   break;
	}
      if(i==n) 
	   cout<<n<<" sade ededdir...";
	return 0;
}
