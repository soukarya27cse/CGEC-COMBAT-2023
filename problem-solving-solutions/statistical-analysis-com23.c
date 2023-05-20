#include <stdio.h>

int main(void) {
  int i,j,temp, arr[15], mean, median, sum=0;
  for(i=0;i<15;i++) {
    scanf("%d", &arr[i]);
  }
  for(i=1;i<15;i++) {
    for(j=1;j<15;j++) {
      if(arr[j-1]>arr[j]) {
        temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
      }
    }
  }
  for(i=0;i<15;i++) {
    sum = sum + arr[i];
  }
  mean = sum/15;
  median = arr[7];
  printf("%d %d", mean, median);
  return 0;
}
