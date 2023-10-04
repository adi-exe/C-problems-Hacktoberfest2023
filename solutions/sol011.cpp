#include <stdio.h>

int main() {
  char ch = 'z';

  while (ch >= 'a') {
    printf("%c ", ch);
    ch--;
  }

  printf("\n");
  
  //-------------------


  do {
    printf("%c ", ch);
    ch--;
  } while (ch >= 'a');

  printf("\n");
  
  //----------------------------


  for (char ch = 'z'; ch >= 'a'; ch--) {
    printf("%c ", ch);
  }

  printf("\n");

  return 0;
}
