#include<iostream>
#define A 0
#define B 1
using namespace std;
int main(){
int C=0;
#if A  //A=0 yeni false oldugu ucun bu sert false olur
C=1;
#elif B //B=1 yeni true ona gore C=2 menimsedilir
C=2;
#else
C=3;
#endif
cout<<C;
return 0;
}
