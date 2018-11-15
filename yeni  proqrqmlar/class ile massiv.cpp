#include<iostream>
using namespace std;

class massiv{
	public:
		int n,k,**p;//iki olculu yaddas sahesi kimi basa dusulur
		massiv(int m,int e){
			n=m;
			k=e;
		}
		
		void yarat(){
			int i,j;
			p=new int *[n];//n sayda gosterici ucun yaddas ayrilir
			for(i=0;i<n;i++)
			p[i]=new int[k];//bu gostericilerin her biri ucun yaddas ayrilir,belelikle ikiolculu massivimiz hazirdi
			for(i=0;i<n;i++)
			for(j=0;j<k;j++)
			cin>>p[i][j];//adi daxietme
		}
		
		void cap(){
			int i,j;
			for(i=0;i<n;i++){
			for(j=0;j<k;j++)
			cout<<p[i][j]<<" ";//cap
			cout<<endl;
			}
		}
		
		void transponire(){
			int i,j;
			for(i=0;i<n;i++)//massivin transponire edilmesi
			for(j=i+1;j<k;j++)
			swap(p[i][j],p[j][i]);
		}
	
};

int main(){
	massiv a(3,3);//massiv sinifinden a obyekti elan olunur,yeni a massivi
	a.yarat();//burada a massivine element yazilir
	a.transponire();//a -nin setr ve sutun yeri deyisilir
	a.cap();//ve alinmis massiv cap olunur
	return 0;
}
