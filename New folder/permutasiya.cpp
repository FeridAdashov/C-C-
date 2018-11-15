#include<iostream>
using namespace std;
int main()
{
	cout<<"Yazilma tarixi: 30.11.2015\n";
	cout<<"Programi yazan: B.Agababa\n";
	cout<<"***Salam***\n";
	int n,i,j,x,s,m,z; char k;
	do{
	cout<<"elementlerin sayi n="; cin>>n;
	int a[n],b[n];
	for(i=0; i<n; i++){
	cin>>a[i]; b[i]=a[i];
	}
    
    for(i=0; i<=n-2; i++){
      for(j=n-1; j>=i+1; j--){
       if(b[j]<b[j-1])	{z=b[j]; b[j]=b[j-1]; b[j-1]=z; }
      
	} }
    for(int i=0; i<n; i++){
	  cout<<b[i]<<" "; 
	} 
    s=0;
	for(i=0; i<n; i++) {
	
	 
	    if(a[i]!=b[i]&&a[i]!=0) { z=a[i];m=i; cout<<"("<<a[i]; a[i]=0; 
		cout<<b[i];   
	     for(s=i; s<n; s++){
		 j=0; 
	     	while(x!=b[m]){
	  		j++; x=a[j]; //cout<<"k"<<j<<"k";
		  }
		  if(z==b[j]) {cout<<")"; a[j]=0;  break;} cout<<b[j]; a[j]=0; m=j; }
	  } else if(a[i]==b[i]) {cout<<"("<<a[i]<<")"; a[i]=0; }
     }
     
     
    
	
	
	cout<<"\nDavam edekmi? (H/Y)";
	  cin>>k; }
	  while(k=='h'||k=='H');
      cout<<"\n***Sag olun***\n";
}
