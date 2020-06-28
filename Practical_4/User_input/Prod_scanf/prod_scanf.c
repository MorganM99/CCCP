#include <stdio.h>

int main() {
  int x;
  float y;
  float result;
  printf ("Enter an integer, then a float, separated by a space: \n");
  scanf ("%d %f", &x, &y);
  result = x * y;
  printf ("%f \n", result);
  return 0;
}