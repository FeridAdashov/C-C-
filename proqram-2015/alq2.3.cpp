//Eded verilir bu ededin oz reqemlerine bolunmeyini yoxlamaq

#include <iostream>
using namespace std;

int main(){
	int eded, saxla;
	
	cout << "Ededi daxil et: ";
	cin >> eded;
	saxla = eded;
	
	while(eded > 0)
	{
		if(saxla % (eded % 10) != 0) break;
		eded /= 10;
	}
	
	if(eded == 0)
		 cout << "Eded oz reqemlerine bolunur...\n";
	else cout << "Eded oz reqemlerine bolunmur...\n";	
	
	return 0;
}
