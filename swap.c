#include <stdio.h>
int main()
{ 
  int a= 5;
  int b = 10;

  int temp = a;
  a = b;
  b = temp;

  printf("A: %d\nB: %d", a, b);
  return 0;
}