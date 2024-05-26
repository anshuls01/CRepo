//
// Created by Anshuls01 on 25/05/24.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "AllocatingMemory.h"

#include <string.h>
#define MAXSTRLEN 100

void DynamicMemoryAllocation() {
    printf("\n**************************************");
    printf("\n Dynamic memory allocation done on heap, so clearing the assigned memory is program responsibility");
    printf("\n Library to include is stdlib.h -> #include <stdlib.h>");
    printf("\n Dynamic Memory allocation can be done: ");
    printf("\n\t1. malloc -> assign memory dynamically");
    printf("\n\t\t Syntax: ");
    printf("\n\t2. calloc -> assign memory dynamically and initialize the memory with nulls");
    printf("\n\t\t Syntax: ");
    printf("\n\t3. realloc -> chnage the size of the memory block of already allocated memory");
    printf("\n\t\t Syntax: ");
    printf("\n\t4. free -> released the assigned memory");
    printf("\n\t\t Syntax: ");

    printf("\n**************************************");
    printf("\n Example of malloc");
    printString("Hello");
    printString("Hello world");

    printString_DynamicMemoryAllocation("Allocate memory dynamically");
    printString_DynamicMemoryAllocationCalloc();
}

void printString_DynamicMemoryAllocationCalloc() {
    int size;
    char* p;
    //char* s = "Hello World";
    size = strlen("Allocate memory dynamically using calloc");
    printf("\n size: %d", size);
    p = (char*)calloc(size, sizeof(char));
    p="Allocate memory dynamically using calloc";
    justprintString(p);
    free(p);
}

void justprintString(char* string) {
    printf("\n %s", string);
}
void printString_DynamicMemoryAllocation(char* string) {
    int size = sizeof(string);
    char *p;
    p = (char*)malloc(size);
    if(p==NULL) {
        printf("\n Malloc failed");
        exit(0);
    }
    p = string;
    char* b;
   // b = (char*)malloc(size);
    // we can use string coy function too
    printf("\n %s", p);
    // strncpy(b,string, size); // not working because of depreciation
    // printf("\n %s", b);

}

void printString(char* string) {
    char* c;
    c = (char*)malloc(MAXSTRLEN); //dynamic memory allocation
    c[0] = 0; //initiallize the buffer -> required in case of malloc
    c = string;
    printf("\n %s",c);
    //free(c);
}