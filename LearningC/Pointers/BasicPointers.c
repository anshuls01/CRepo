//
// Created by Anshuls01 on 22/05/24.
//
#include <stdio.h>
#include "BasicPointers.h"

void declareBasicPointer() {
    int num;
    int *numptr; // pointer to integer
    int num2;
    num =100;
    numptr = &num;
    num2 = *numptr; // de-refrencing the pointer
    printf("value of num: %d\n", num);
    printf("Address of &num: %p\n", &num);
    printf("value store at numptr: %p\n", numptr);
    printf("address of &numpter: %p\n", &numptr);
    printf("de-referenced value of *numptr: %d\n", *numptr); //de-reference *numptr -> *(&num) -> point to address of num, i.e. pointing to the value stored at addess of num
    printf("value of num2: %d\n", num2); // num2 value should be of num1 value
    printf("size of num %lu\n", sizeof(num));
    printf("size of &num %lu\n", sizeof(&num));
    printf("size of num2 %lu\n", sizeof(num2));
    printf("size of numptr %lu\n", sizeof(numptr));
    printf("size of &numptr %lu\n", sizeof(&numptr));
    printf("size of *numptr %lu\n", sizeof(*numptr));

    printf("\n\n");
    char c = 'A';
    char *charptr = &c; // pointer to char
    printf("Size of char: %lu\n", sizeof(c));
    printf("Size of *charptr: %lu\n", sizeof(*charptr));
    printf("Size of address of char: %lu\n", sizeof(&c));
    printf("Size of charptr: %lu\n", sizeof(charptr));
    printf("Size of &charptr: %lu\n", sizeof(&charptr));

    printf("\n\n");
    double d = 2.3;
    double *doubleptr = &d; // pointer to double
    printf("Size of double d: %lu\n", sizeof(d));
    printf("Size of *doubleptr: %lu\n", sizeof(*doubleptr));
    printf("Size of address of double d: %lu\n", sizeof(&d));
    printf("Size of doubleptr: %lu\n", sizeof(doubleptr));
    printf("Size of &doubleptr: %lu\n", sizeof(&doubleptr));





}