//
// Created by Anshuls01 on 22/05/24.
//
#include <stdio.h>
#include "DataTypes.h"
void DifferentDataTypes()
{
    printf("\n**************************************\n");
    printf("\n");
    printf("C Main Data types:");
    printf("\n");
    printf("------------------");
    int a = 10;
    printf("\n");
    printf("1. Integer (int) Data type, size of int: %d", sizeof(a));
    double d = 1.1;
    printf("\n");
    printf("2. Double (double) Data type, size of double: %d", sizeof(d));
    printf("\n");
    char c = 'A';
    printf("3. Character (char) Data type, size of char: %d", sizeof(c));
    printf("\n");
    char abc[] = "Name";
    printf("4. Array (char []) Data type, size of array depends on number of char present + 1 termination char \n   for example if char abc[] = \"""Name""\", size of array will be: %d", sizeof(abc));

    printf("\n**************************************\n");

    printf("\nDeclare constatnt variable in C");
    printf("\n const int x = 5 OR int const x = 5");


    printf("\n**************************************\n");
    printf("\nDeclare Array in C");
    printf("\n char arr[20] or int arr[]={1,2,3,4} or char arr[] = \"I Love C\"");
    printf("\n In c there is no String datatype and char[] will be used instead of string.");
    printf("\n For Example:\n char name[] = \"""Tom smith\"""");
    printf("\n void printName(char name[])\n {\n\tprintf(\"""%%s\""",name);\n }");
    // char arr[]= "I love c";
    // printf("\n %s", arr);

    printf("\n\n");
    printf("\n**************************************\n");
    printf("\nSize of Address is 8 byte on 64 bit system (8*8) and 4 byte on 32 bit system (8*4)");
    printf("\nsimlarly for all pointer variable size will be either 8 or 4");
    printf("\nFor example:");
    printf("\n\tsizeof(intptr) will be 8 or 4");
    printf("\n\tsizeof(charptr) will be 8 or 4");
    printf("\n\tsizeof(doubleptr) will be 8 or 4");
    printf("\n while size of de-refenced pointer variable will be the size of datatype");
    printf("\n For Example:");
    printf("\n\tsizeof(double) or sizeof(*doubleptr) is 8");
    printf("\n\tsizeof(int) or sizeof(*intptr) is 4");
    printf("\n\tsizeof(char) or sizeof(*charptr) is 1");
    printf("\n For Example:\n char name[] = \"""Tom smith\"""");
    printf("\n**************************************\n");
    printf("\n\n");
}
