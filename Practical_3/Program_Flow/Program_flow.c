#include <stdbool.h>
#include <stdio.h>

/* insert addmult prototype */
//int addmult (int x, int y, int z);

int addmult (int x, int y, int z) {
  return (x + y) * z;
}

int main() {
  int x = 0;
  int y = 0;

  y = addmult (3, 4, 5);
  printf ("Addmult(3,4,5) = %d \n", y);

  printf ("These are numbers less than 10 \n");
  for (x = 0; x < 10; x = x + 1) {
    printf ("%d \n",
            x); // will print x, you can change this variable if you want
  }

  x     = 1;
  int i = 2;
  printf ("These are square numbers less than 100\n");
  while (x < 100) {
    printf ("%d\n", x);
    x = i * i;
    i = i + 1;
  }

  printf ("This loop runs until it gets to 49, then it prints and stops\n");

  x = 30;
  do {
    if (x == 49) {
      printf ("%d \n", x);
      break;
    }
    x = x + 1;
  } while (1); // try not to change this

  x = 2;
  y = 2;

  printf ("This should print Yes if x == y, otherwise it should print No\n");

  switch (x == y) {
    case true: printf ("Yes \n"); break;

    case false: printf ("No \n"); break;
  };
}