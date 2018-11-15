//n sayda elementi olan M massivi verilib
//indeksleri tek olan cut elementlerin sayini tapin

#include<iostream>
using namespace std;

int main()
{
	int n, s=0;
	cout << "Massivin olcusunu girin: ";
	cin >> n;
	
	int M[n];
	cout << "Massivi daxil edin:\n";
	
	for(int i = 0; i < n; i++)
	cin >> M[i];
	
	for(int i = 0; i < n; i++)
	if(i%2 == 1 && M[i]%2 == 0)
	s++;
	
	cout << "Indeksi tek, ozu cut olan element sayi: " << s;
	
	return 0;
}
