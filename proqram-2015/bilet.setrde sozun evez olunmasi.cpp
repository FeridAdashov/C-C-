//Setrdeki sozun evez olunmasi
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[100], b[20], c[20];
	int l, l1, l2, i, j, n, t, k;
	
	cout << "setrde sozun evez olunmasi\nsetri daxil et:\n";
	gets(a);
	cout << "evez olunacaq sozu daxil et: ";
	gets(b);
	cout << "Hansi sozle evez olunsun? : ";
	gets(c);
	
	l = strlen(a);
	l1 = strlen(b);
	l2 = strlen(c);
	
	for(i = 0; i < l; i++)
	{	j = 0; n = i;
		while(a[i] == b[j] && a[i] != ' ' && i < l){ //sozu tapiram
			i++;
			j++;
		}
		if(l1 == j && (a[i] == ' ' || a[i] == '\0')) //istediyim sozun eminliyini ifle yoxluyuram
		{
			if(l1<l2)          //verilmis soz evez olunacaq sozden boyukse massiv ferq qeder saga surusur
			{
				for(t = l; t >= i; t--)
				a[t + (l2 - l1)] = a[t];
				l += (l2 - l1);
			}
			
			else if(l1>l2)    //verilmis soz evez olunacaq sozden kicikse massiv ferq qeder sola surusur
			{
				for(t = i; t < l; t++)
				a[t - (l1 - l2)] = a[t];
				l -= (l1 - l2);
			}
			k = 0;
			for(t = n; t < n + l2; t++)  //verilmis soz evez olunacaq soze beraberse 
			{
				a[t] = c[k];
				k++;
			}
			
		}
	}
	
	for(i = 0; i < l; i++) 
	cout << a[i];
		
	return 0;
}
