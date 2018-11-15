#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char a,b[20];
	string c;
	cin.get(a);
	cout << "cin.get() ile daxil olunan simvol: " << a << endl;
	getline(cin,c);
	getline(cin,c);//c++ in ferqli xususiyyeti(catismayan cunki iki defe daxil etmeliyem)
	cout << "getline(cin,string) ile daxil edilen string: " << c << endl;
	cin.getline(b,8);// 7 simvolluq yer ayrilir 8-ci yer setr sonlugu ucun
	cout << "cin.getline() ile daxil edilen char tipli setr: " << b;
	cin.getline(b[20]);
	return 0;
}
