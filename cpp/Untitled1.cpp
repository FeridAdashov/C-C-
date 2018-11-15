#include <iostream>
#include <list>

using namespace std;


int main()
{
	string s = "one two four three d  ";
	list<string> arr;
	list<string>::iterator it;
	char t = ' ';
	int a = 0, i;	
	
	for( i = 0; i < s.length(); ++i )
	{
		if(s[i] == t || (i == s.length() - 1 && s[i] != ' '))
		{
			arr.push_back(s.substr(a, i - a));
			a = i + 1;
		}
	}
		
   	for(it = arr.begin(); it != arr.end(); ++it)
   		cout << *it << endl;
	
	return 0;
}
