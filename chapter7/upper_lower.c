#include <stdio.h>
#include <ctype.h>

int main() {
  int c;
  while ((c = getchar()) != EOF)
    putchar(isupper(c) ? tolower(c) : c);
}
