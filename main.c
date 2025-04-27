#include <stdio.h>
#include <stdlib.h>
#define INF 1000000000

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n, m;
    printf("Is sayisini girin: ");
    scanf("%d", &n);
    printf("Makine sayisini girin: ");
    scanf("%d", &m);

    int islemSuresi[n][m];
    int gecis[m][m];
    int dinamikProgTablo[n][m];

    printf("Islerin makinelere gore islenme surelerini girin:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &islemSuresi[i][j]);
        }
    }

    printf("Makine gecis maliyetlerini girin:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &gecis[i][j]);
        }
    }

    for (int j = 0; j < m; j++) {
        dinamikProgTablo[0][j] = islemSuresi[0][j];
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < m; j++) {
            dinamikProgTablo[i][j] = INF;
            for (int k = 0; k < m; k++) {
                int current = dinamikProgTablo[i-1][k] + gecis[k][j] + islemSuresi[i][j];
                dinamikProgTablo[i][j] = min(dinamikProgTablo[i][j], current);
            }
        }
    }

    int result = INF;
    for (int j = 0; j < m; j++) {
        if (dinamikProgTablo[n-1][j] < result) {
            result = dinamikProgTablo[n-1][j];
        }
    }

    printf("Minimum toplam sure: %d\n", result);

    return 0;
}
