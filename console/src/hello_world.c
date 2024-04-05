#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int hello(void) {
  int i;
  char input;
  printf("数字を入力してください\n>> ");
  input = getchar();

  if (isdigit(input)) {
    i = input - '0';
  }

  printf("入力されたのは %d です。\n", i);
  return 0;
}
