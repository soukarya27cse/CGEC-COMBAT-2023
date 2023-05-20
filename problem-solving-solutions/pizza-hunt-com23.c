#include <stdio.h>

int main(void) {
  int store1, store2, cost1, cost2, x, y;
  store1 = 100;
  store2 = 150;
  scanf("%d", &x);
  scanf("%d", &y);
  cost1 = store1 - (store1*x/100);
  cost2 = store2 - (store2*y/100);
  if (cost1<cost2) {
    printf("FIRST");
  } else if (cost2<cost1) {
    printf("SECOND");
  } else {
    printf("BOTH");
  }
  return 0;
}
