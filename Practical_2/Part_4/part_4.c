#include <stdio.h>
#include <string.h>
int main() {
  char name1[10] = "Joe";
  char name2[10] = "Bloggs";
  char fullname[20];
  char space[2] = " ";

  // TODO: use string manipulation functions to make fullname be "Joe Bloggs".
  strncpy (fullname, name1, 20 - strlen (fullname));
  strncat (fullname, space, 20 - strlen (fullname));
  strncat (fullname, name2, 20 - strlen (fullname));
  printf ("%s\n", fullname); // should print "Joe Bloggs"
}
