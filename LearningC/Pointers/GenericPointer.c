//
// Created by Anshuls01 on 25/05/24.
//
#include <stdio.h>
#include "GenericPointer.h"
void UnderstandingGenericPointer() {
    printf("\n**************************************");
    printf("\n Generic Pointer declared: void *p");
    printf("\n Generic Pointer can hold the reference of any type, and cast it later to actual datatype to retrieve values");

    void *p;
    int i = 123;
    p = &i;
    printf("\n assign int to generic poiner: p=&i");
    printf("\n printf(\"%%d, *(int*)p\")");
    printf("\n To cast to int : (int)i");
    printf("\n To cast to pointer to int: (int*)i");
    printf("\n To ge the int value, dereference the int pointer is: *(int*)i");
    printf("\n Generic Pointer [(int*)p] or [&i] reffer to this address: %p, address of i %p", (int*)p, &i);
    printf("\n value of int using Generic Pointer: %d", *(int*)p);

    printf("\n**************************************");
    printf("\n Let's use int array with generic pointer: ");
    printf("\n int numbers[3];");
    int numbers[3];
    for(int i = 0;i<3;i++) {
        numbers[i]=i;
    }
    printf("\n initialize numbers array to {0,1,2}");
    printf("\n assign generic pointer to int array: \n p = numbers;");
    p = numbers;
    printf("\n value stored at p: %p, numbers address %p, or using address operator with numbers %p", p, numbers, &numbers);
    printf("\n Dereference the pointer to get the value of integer: \n *(int*)p");
    printf("\n value of first integer stored in array: %d", *(int*)p);
    printf("\n inclrement the pointer to next int: \n p = (int*)p+1");
    p = (int*)p+1;
    printf("\n value of first integer stored in array: %d", *(int*)p);
    printf("\n**************************************");
    printf("\n Let's use array of string with generic pointer: ");
    printf("\n just for reminder, define char array in C: char arr[] or char* arr");
    printf("\n to define the atring array in c: char* arr[] or char** arr");
    printf("\n Let's say we have words array: \n char* words[3]; \n words[0] = \"Zero\"\n words[1] = \"One\"\n words[2] = \"Two\"");
    char* words[3];
    words[0] = "Zero";
    words[1] = "One";
    words[2] = "Two";
    p = words;

    printf("\n assign char array to generic poiner: p=words [no & symbol is required]");
    printf("\n value stored at %p", p);
    printf("\n value stored at [(char**)p==p] p ; %p", (char**)p);
    printf("\n address of (char*)p or words[0]; %p", (char*)p);
    printf("\n value of words[0], dereference the pointer [*char(**)p] words[0]; %s", *(char**)p);
    printf("\n move pointer to next-> word[1]: \n p = (char**)p+1;");
    p = (char**)p+1;
    printf("\n value stored at [(char**)p==p] p ; %p", (char**)p);
    printf("\n address of (char*)p or words[1] ; %p", (char*)p);
    printf("\n value of words[1], dereference the pointer [*char(**)p] words[1]; %s", *(char**)p);
    printf("\n**************************************");
}
