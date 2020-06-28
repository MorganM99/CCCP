#include <stdio.h>
#include <string.h>

int main() {
  struct {
    float x;
    float y;
  } coord;

  FILE* readptr;
  readptr = fopen ("coord.txt", "r");
  FILE* writeptr;
  writeptr = fopen ("coord.bin", "wb");

  char read_in[100];
  for (int i = 0; i < 4; ++i) {
    fgets (read_in, 100, readptr);
    read_in[strcspn (read_in, "\r\n")] = 0;
    sscanf (read_in, "%f %f", &coord.x, &coord.y);
    printf ("%1.1f %1.1f \n", coord.x, coord.y);
    fwrite (&coord, sizeof (coord), 1, writeptr);
  }
  fclose (readptr);
  fclose (writeptr);
  return 0;
}