//Tower of Hanoi using Stacks!
#include<iostream>
using namespace std;

void hanoy(int m,int n,char a,char b,char c){
	 //int a1[n],b1[n],c1[n];
	if(m==1) cout<<a<<" -dan "<<b<<" -ye"<<endl;
	else {
		hanoy(m-1,n,a,c,b);
		cout<<a<<" -dan "<<b<<" -ye"<<endl;
		hanoy(m-1,n,c,b,a);
	}
	
}

int main()
{
    int disksay;
    cout<<"Disk Sayini daxil et: ";
    cin>>disksay;
    hanoy(disksay,disksay,'A','B','C');
}
