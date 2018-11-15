// g faylinin f faylina kocurulmesi

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string a;
	
	ifstream yazilanioxu("D:\\g.text");
	ofstream yaz("D:\\f.text");
	
	while(true)
	{   
	    getline(yazilanioxu,a);
	    if(yazilanioxu)
	    {
			yaz << a <<endl;
			cout << a <<endl;
		}
		if(!yazilanioxu) break;
	}
	yazilanioxu.close();
	yaz.close();
	return 0;
}
