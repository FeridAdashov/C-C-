#include<iostream>
using namespace std;
int main(){
	int ds,i,j=0,k=0;
	cin>>ds;
	int a1[ds],a2[ds],a3[ds];
	for(i=0;i<ds;i++){
	cin>>a1[i];
	a2[i]=0;
	a3[i]=0;
	}
	i--;
	while(i>=0){
		
		if(a1[i]<a2[j] || (j==0 && a2[j]==0)){
			a2[j]=a1[i];
			a1[i]=0;
			i--;
		}
		
		else if(a2[j]<a3[k] || (k==0 && a3[k]==0)){
			a3[k]=a2[j];
			a2[j]=0;
			if(j>0)
			j--;
			k++;
		}
		else 
		{
			for(int t=k;t>=0;t--)
			{
				i++;
				a1[i]=a3[k];
				a3[k]=0;
				k--;
			}
		}
	}
	for(i=0;i<ds;i++)
	cout<<a3[i]<<" ";
	return 0;
}                 
