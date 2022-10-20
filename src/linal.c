#include <stdio.h>
#include "../lib/vector.h"

int main() {
    int vector1[2] = {1, 1};
    int vector2[2] = {3, 4};

    int sum[2] = {0};
    add(&vector1, &vector2, &sum);
    
    int difference[2] = {0};
    subtract(&vector1, &vector2, &difference);

    int dot = 0;
    dot_product(&vector1, &vector2, &dot);

    int cross = 0;
    cross_product(&vector1, &vector2, &cross);


    printf("for vectors [%d, %d] [%d, %d]:\n", vector1[0], vector1[1], vector2[0], vector2[1]);
    printf("sum: %d %d\n", sum[0], sum[1]);
    printf("difference: %d %d\n", difference[0], difference[1]);
    printf("dot: %d\n", dot);
    printf("cross: %d\n", cross);


    return 0;
}
