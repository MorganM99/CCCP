#include <stdio.h>
#include <string.h>

int main() {
  struct {
    float x;
    float y;
  } coord;

  FILE* readptr;
  readptr = fopen ("coord.bin", "rb");

  for (int i = 0; i < 4; ++i) {
    fread (&coord, sizeof (coord), 1, readptr);
    printf ("%1.1f %1.1f \n", coord.x, coord.y);
  }
  fclose (readptr);
  return 0;
}