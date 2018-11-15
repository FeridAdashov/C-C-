#include<iostream>
using namespace std;
int saded(int n){int i,j;
	for(i=2;n>0;i++) {
	for(j=2;j<=i;j++){
	if(i%j==0 && i!=j) goto son;	
	if(i==j){n--;
	goto son;
	}	
	}son: ;}
return i-1;	
}

int main(){
	int n,i,j;
	cout<<"sade vuruqlara ayirma\neded daxil et: ";
	cin>>n;
	cout<<n<<" ededinin sade vuruqlara ayrilisi:\n";
	for(i=1;i<=n;i++){bas:
	if(n%saded(i)==0){
	cout<<saded(i)<<"  ";
	n/=saded(i);}
	if(n%saded(i)==0)
	goto bas;
	}
	return 0;
}
