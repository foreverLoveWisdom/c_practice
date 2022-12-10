#include <stdio.h>
#include <math.h>

int convertDecimalToBinary(int num) {
  int binary = 0;
  int remainder;
  int i = 1;

  while (num != 0) {
    remainder = num % 2;
    num /= 2;
    binary += remainder * i;
    i *= 10;
  }

  return binary;
}

void printDecimalToBinary(int num) {
  int binNumber = convertDecimalToBinary(num);
  printf("\nBinary number is: %i", binNumber);
}


int main() {
  int a = 5, b = 7;
  printf("a = %d, b = %d", a, b);
  printDecimalToBinary(a);
  printDecimalToBinary(b);
  printf("\n");
  printf("a&b = %d", convertDecimalToBinary(a & b));
  printf("\n");
  printf("a|b = %d", convertDecimalToBinary(a | b));
  printf("\n");
  printf("a^b = %d", convertDecimalToBinary(a ^ b));
  printf("\n");
  printf("~a = %d", convertDecimalToBinary(~a));
  printf("\n");
  printf("a<<1 = %d", convertDecimalToBinary(a << 1));
  printf("\n");
  printf("a>>1 = %d", convertDecimalToBinary(a >> 1));
  return 0;
}
