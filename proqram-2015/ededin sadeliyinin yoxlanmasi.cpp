#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n,i;
cin>>n;
for(i=2;i<=n;i++)
if(n%i==0)
break;
if(n==i) cout<<n<<" ededi sade ededdir...";
else cout<<n<<" ededi murekkeb ededdir...";
return 0;	
}
