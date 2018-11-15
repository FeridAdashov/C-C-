#include<iostream>
using namespace std;
int main(){
	int i,j,n,k,s1=0,s2,s3,s4=0;
	cout<<"olcu gir: "; cin>>n;
	int a[n][n];
	cout<<"massivi gir: ";
	for(i=0;i<n;i++){
	for(j=0;j<n;j++)
	cin>>a[i][j];
	s1+=a[i][0];}
	for(i=0;i<n;i++){
	s2=0; s3=0;
	for(j=0;j<n;j++){
		s2+=a[i][j];
		s3+=a[j][i];
		if(i==j) s4+=a[i][j];
	}
	if(s1!=s2 || s1!=s3){
		cout<<"bu matris sehirli deyil...\n";
		break;
	}
	if(i==n-1 && s1!=s4)
	cout<<"bu matris sehirli deyil...\n";
	else if(i==n-1) cout<<"bu matris sehirlidir...\n";
}	
	return 0;
}
