#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

int main()
{
	std::ofstream pad("Pad.txt", std::ios::out | std::ios::app);
	std::string x, y, z;
	char ch;
	while(1)
	{
		std::cout << "Name: ";
		std::cin >> x;
		std::cout << "Surname: ";
		std::cin >> y;
		std::cout << "Phone Number: ";
		std::cin >> z;
		pad << std::left << std::endl << std::setw(20) << x << std::setw(20) << y << z << std::endl;
		std::cout << "Do you continue enter the profile? (y/n) : ";
		std::cin.ignore();
		std::cin.get(ch);
		if(toupper(ch) == 'N') break;
	}
	return 0;
}
