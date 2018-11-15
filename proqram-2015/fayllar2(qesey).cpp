#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int n, i=0, m;
	ofstream cap("d:\\output.text");
	ifstream yaz("d:\\input.text");
	while(1){
	i++;
	yaz>>n;
	yaz>>m;
	if(!yaz)break;
	cap<<"cem:"<<i<<"="<<m+n<<endl;
	
	}
	cout<<"Islem Basarili.\n";
	return 0;
}
