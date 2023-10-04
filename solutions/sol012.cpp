#include <stdio.h>

int main() {
  int i = 1;

  while (i <= 100) {
    printf("HAPPY BIRTHDAY\n");
    i++;
  }

  printf("\n");

  // To print infinite times, remove the condition `i <= 100`
  while (1) {
    printf("HAPPY BIRTHDAY\n");
  }
//--------

  
  do {
    printf("HAPPY BIRTHDAY\n");
    i++;
  } while (i <= 100);

  printf("\n");

  // To print infinite times, remove the condition `i <= 100`
  do {
    printf("HAPPY BIRTHDAY\n");
  } while (1);
//-----------

  
  for (int i = 1; i <= 100; i++) {
    printf("HAPPY BIRTHDAY\n");
  }

  printf("\n");

  // To print infinite times, remove the condition `i <= 100`
  for (int i = 1; ; i++) {
    printf("HAPPY BIRTHDAY\n");
  }

  
  return 0;
}
