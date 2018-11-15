//Tower of Hanoi using Stacks!
#include<iostream>
using namespace std;

void hanoy(int m,char a,char b,char c){
	if(m==1) cout<<a<<" -dan "<<b<<" -ye"<<endl;
	else {
		hanoy(m-1,a,c,b);
		cout<<a<<" -dan "<<b<<" -ye"<<endl;
		hanoy(m-1,c,b,a);
	}
	
}

int main()
{
    int disksay;
    cout<<"Disk Sayini daxil et: ";
    cin>>disksay;
    hanoy(disksay,'A','B','C');
}
