#ifndef MODULE_VECTOR_H_
#define MODULE_VECTOR_H_

// adds 2x2 vector1 to vector2 and returns pointer to the result. result's size is size
void add(int* vector1, int* vector2, int* result);

// sutracts 2x2 vector2 from vector1 and returns pointer to the result. result's size is size
void subtract(int* vector1, int* vector2, int* result);

// performs a dot product of 2x2 vector1 and vector2 and returns int result
void dot_product(int* vector1, int* vector2, int* result);

// performs cross product of 2x2 vector1 and vector2 and returns pointer to the result. result's size is size
void cross_product(int* vector1, int* vector2, int* result);

#endif
