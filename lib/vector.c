#ifndef MODULE_VECTOR_H_
#define MODULE_VECTOR_H_

void add(int* vector1, int* vector2, int* result) {
    result[0] = vector1[0] + vector2[0];
    result[1] = vector1[1] + vector2[1];
    result[2] = vector1[2] + vector2[2];
    
    return;
}


void subtract(int* vector1, int* vector2, int* result) {
    result[0] = vector1[0] - vector2[0];
    result[1] = vector1[1] - vector2[1];
    result[2] = vector1[2] - vector2[2];

    return;
}


void dot_product(int* vector1, int* vector2, int* result) {
    *(result) = vector1[0]*vector2[0] + vector1[1]*vector2[1] + vector1[2]*vector2[2];

    return;
}


void cross_product(int* vector1, int* vector2, int* result) {
    result[0] = vector1[1]*vector2[2] - vector1[2]*vector2[1];
    result[1] = -1 * (vector1[0]*vector2[2] - vector1[2]*vector2[0]);
    result[2] = vector1[0]*vector2[1] - vector1[1]*vector2[0];

    return;
}

#endif
