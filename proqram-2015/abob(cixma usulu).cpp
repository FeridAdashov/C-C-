#include<iostream>

int main(){
	
	int a, b;
	
	std::cout << "Enter two numbers:\n";
	std::cin >> a>> b;
	
	std::cout << "GCD ( " << a << " , " << b<< ") = ";
	
	while(a!=b){
		if(a>b) a=a-b;
		else b=b-a;
	}
	
	std::cout << a << "\n\n";
	
	return 0;
}
