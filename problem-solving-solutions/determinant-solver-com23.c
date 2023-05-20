#include <stdio.h>

int main(void) {
  int n, mat[3][3], i, j, det;
  scanf("%d", &n);
  for (i=0;i<n;i++) {
    for (j=0;j<n;j++) {
      scanf("%d", &mat[i][j]);
    }
  }
  if (n==1) {
    det = mat[0][0];
  } else if (n==2) {
    det = mat[0][0]*mat[1][1] - mat[1][0]*mat[0][1];
  } else {
    det = mat[0][0]*(mat[1][1]*mat[2][2] - mat[1][2]*mat[2][1]) - mat[0][1]*(mat[1][0]*mat[2][2] - mat[1][2]*mat[2][0]) + mat[0][2]*(mat[1][0]*mat[2][1] - mat[1][1]*mat[2][0]);
  }
  printf("%d", det);
  return 0;
}
