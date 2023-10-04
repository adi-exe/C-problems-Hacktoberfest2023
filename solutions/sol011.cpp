#include <stdio.h>

int main() {
  char ch = 'z';

  while (ch >= 'a') {
    printf("%c ", ch);
    ch--;
  }

  printf("\n");

  return 0;
}
