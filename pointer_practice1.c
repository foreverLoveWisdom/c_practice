#include <stdio.h>
#include <string.h>

int main() {
  int m = 10;
  int n, o;
  int *z;
  z = &m;
  printf("Memory address of m is %p", &m);
  printf("\nValue of z is %p", z);
  printf("\nThe value that z is pointing to is %d", *z);
  printf("\nThe memory address of the pointer z is %p", &z);
  printf("\nThe memory address of n is %p", &n);
  printf("\nThe memory address of o is %p", &o);
  return 0;
}
