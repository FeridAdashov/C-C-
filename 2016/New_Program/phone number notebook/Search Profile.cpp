#include <iostream>
#include <map>
#include <string>
#include <fstream>
using namespace std;

class name{
	string name_i, name_j;
public:
	name(){ name_i = ""; name_j = ""; }
	name(string s, string t){ name_i = s; name_j = t;}
	string get(){ return name_i; }
};

class phone_number{
	string ph_num;
public:
	phone_number(){ ph_num = ""; }
	phone_number(string s){ ph_num = s; }
	string get(){ return ph_num; }
};

bool operator<(name a, name b)
{
	return a.get().compare((b.get())) < 0;
}

int main()
{
	map<name, phone_number>ob;
	ifstream pad("Pad.txt", ios::in);
	string x, y, z;
	char ch;
	while(pad.get() != '\n');
	while(1)
	{
		pad >> x;
		pad >> y;
		pad >> z;
		if(pad.eof()) break;
		ob.insert(make_pair(name(x, y), phone_number(z)));
	}
	pad.close();
	map<name, phone_number>::iterator p;
	while(1)
	{
		cout << "Enter name and surname: ";
		cin >> x >> y;
		p = ob.find(name(x, y));
		if(p != ob.end())
		cout << "Phone Number of : " << x << " " << y << " is : " << p->second.get() << endl << endl;
		else cout << "This Profile is not Pad\n";
		cout << "Do you want research? (y/n) : ";
		cin.ignore();
		cin.get(ch);
		if(toupper(ch) == 'N')break;
	}
	
	
	
	return 0;
}

