#include <stdio.h>
#include <iostream>
#include <float.h>
using namespace std;
int main() {

   printf("Storage size for float : %d \n", sizeof(float));
   printf("Minimum float positive value: %e\n", FLT_MIN );
   printf("Maximum float positive value: %e\n", FLT_MAX );
   printf("Precision value: %d\n\n", FLT_DIG );
   printf("Storage size for double : %d \n", sizeof(double));
   printf("Minimum double positive value: %e\n", DBL_MIN );
   printf("Maximum double positive value: %e\n", DBL_MAX );
   printf("Precision value: %d\n\n", FLT_MANT_DIG );
   
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl << endl;
   cout << "Size of long long: " << sizeof(long double);
   
   return 0;
}
