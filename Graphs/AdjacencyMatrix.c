#include <stdio.h>

void viewData(int arr[5][5], int row) {
  for (int i = 1; i < row; i++) {
    for (int j = 1; j < row; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

int main() {

  int n, m;
  scanf("%d %d", &n, &m);
  int adjMat[n + 1][n + 1];
  for (int i = 0; i < m; i++) {
    int u, v;
    scanf("%d %d", &u, &v);
    adjMat[u][v] = 1;
    adjMat[v][u] = 1;
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (adjMat[i][j] != 1) {
        adjMat[i][j] = 0;
      }
    }
  }

  viewData(adjMat, 5);
  return 0;
}
