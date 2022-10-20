#include <stdio.h>
#include "../lib/vector.h"

int main() {
    int vector1[2] = {1, 1, 1};
    int vector2[2] = {3, 4, 6};

    int sum[3] = {0};
    add(&vector1, &vector2, &sum);
    
    int difference[3] = {0};
    subtract(&vector1, &vector2, &difference);

    int dot = 0;
    dot_product(&vector1, &vector2, &dot);

    int cross[3] = {0};
    cross_product(&vector1, &vector2, &cross);


    printf("for vectors [%d, %d, %d] [%d, %d, %d]:\n", vector1[0], vector1[1], vector1[2], vector2[0], vector2[1], vector2[2]);
    printf("sum: [%d, %d, %d]\n", sum[0], sum[1], sum[2]);
    printf("difference: [%d, %d, %d]\n", difference[0], difference[1], difference[2]);
    printf("dot: %d\n", dot);
    printf("cross: [%d, %d, %d]\n", cross[0], cross[1], cross[2]);

    return 0;
}
