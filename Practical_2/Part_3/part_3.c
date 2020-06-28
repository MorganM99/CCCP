#include <stdio.h>
int main() {
  long long int x = 256;
  long long int y = 6000;
  long long int z = 100;
  x               = x * y;
  z               = z * x;
  z               = z * y;
  printf ("%lld \n", z); // should print 921600000000
}