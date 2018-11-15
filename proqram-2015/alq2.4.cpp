//Eded verilir bu ededin en boyuk versiyasi,yeni reqemlerinden duzelen en boyuk eded

#include <iostream>
using namespace std;

int main(){
	int eded, yigim[3], i = 0, kecid;
	
	cout << "3 reqemli ededi daxil et: ";
	cin >> eded;
	
	while(eded > 0)
	{
		yigim[i] = eded % 10;
		i++;
		eded /= 10;
	}
	
	for(int j = 0; j < 3; j++)
	for(i = 0; i < 2; i++)	
		if(yigim[i] < yigim[i+1])
		{
			kecid = yigim[i];
			yigim[i] = yigim[i+1];
			yigim[i+1] = kecid;
		}
	
	eded = 0;
	
	for(i = 0; i < 3; i++)
		eded = eded * 10 + yigim[i];
	
	cout << "Bu ededin reqemlerinden duzelen en boyuk eded " << eded << " -dir...\n";
	
	return 0;
}
