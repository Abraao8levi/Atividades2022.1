#include <stdio.h>

int main(void) {
  char op;
  float num;

  scanf("%c", &op);
  scanf("%f", &num);

  if(op == 'c') {
    printf("%d\n", ((int) num) + 1);
  }
  else if(op == 'f') {
    printf("%d\n", (int) num);
  }
  else if(op == 'r') {
    float dec = num - (int) num;
    if(dec >= 0.5 ) {
      printf("%d\n", ((int) num) + 1);
    } else {
      printf("%d\n", (int) num);
    }
  }

  return 0;
}