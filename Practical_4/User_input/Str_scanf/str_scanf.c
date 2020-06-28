#include <stdio.h>
#include <string.h>

int main() {
  char input_str[50];
  printf ("Enter a string of length less than 50: \n");
  fgets(input_str,50,stdin);
  input_str[strcspn(input_str, "\r\n")] = 0; 
  printf ("%s \n", input_str);
  return 0;
}