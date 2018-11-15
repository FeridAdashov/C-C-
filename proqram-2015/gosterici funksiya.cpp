#include <iostream>
#include <conio.h>

void func(int);

main(){
      void (*fp)(int);

      fp = func;

      (*fp)(1);
      fp(2);

}

void func(int arg){
      printf("%d\n", arg);
}
