#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM1 2
#define DIM2 2
#define DIM3 2
#define DIM4 2
#define MAX 20

#define bool int
#define true 1
#define false 0

int mat_a[DIM1][DIM2];
int mat_b[DIM3][DIM4];
int mat_c[DIM1][DIM2];

int i, j;

void init(int mat[DIM1][DIM2], int x) {
    for (i = 0; i < DIM1; i++) {
        for (j = 0; j < DIM2; j++) {
            mat[i][j] = x;
        }
    }
}

void print(int mat[DIM1][DIM2]) {
    for (i = 0; i < DIM1; i++) {
        for (j = 0; j < DIM2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void init_rand(int mat_a[DIM1][DIM2], int mat_b[DIM3][DIM4]) {
    srand((unsigned) time(0));
    for (i = 0; i < DIM1; i++) {
        for (j = 0; j < DIM2; j++) {
            mat_a[i][j] = rand() % MAX;
        }
    }

    for (i = 0; i < DIM3; i++) {
        for (j = 0; j < DIM4; j++) {
            mat_b[i][j] = rand() % MAX;
        }
    }
}

bool mult(int mat_a[DIM1][DIM2], int mat_b[DIM1][DIM2], int mat_c[DIM1][DIM2]) {
    if (DIM1 != DIM3 || DIM2 != DIM4) return false;

    for (i = 0; i < DIM1; i++) {
        for (j = 0; j < DIM2; j++) {
            mat_c[i][j] = mat_a[i][j] * mat_b[i][j];
        }
    }

    return true;
}

int main() {

    init(mat_a, 0);
    printf("Initialition: \n");
    print(mat_a);

    init_rand(mat_a, mat_b);
    printf("Zufaellige Zahlen: \n");
    print(mat_a);
    print(mat_b);

    printf("Multiplikation: \n");
    if (mult(mat_a, mat_b, mat_c)) {
        print(mat_c);
    } else {
        printf("Multiplikation nicht moeglich!");
    };
    return 0;
}


