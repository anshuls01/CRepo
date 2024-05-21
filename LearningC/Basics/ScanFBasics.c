//
// Created by AnshulS01 on 22/05/24.
// credit: https://www.geeksforgeeks.org/
#include <stdio.h>
#include "ScanFBasics.h"
void printScanffBasicUsage() {
    printf("\n\n");
    printf("\n Scanf \n");
    printf("\n In C programming language, scanf is a function that stands for Scan Formatted String. It is used to read data from stdin (standard input stream i.e. usually keyboard) and then writes the result into the given arguments.");
    printf("\n It accepts character, string, and numeric data from the user using standard input.");
    printf("\n scanf also uses format specifiers like printf.");
    printf("\n \t 1. %%d to accept input of integers.");
    printf("\n \t 2. %%ld to  accept input of long integers");
    printf("\n \t 3. %%lld to accept input of long long integers");
    printf("\n \t 4. %%f to accept input of real number.");
    printf("\n \t 5. %%c to accept input of character types.");
    printf("\n \t 6. %%s to accept input of a string.");

    printf("\n\n scanf examples:");
    printf("\n to read integer value from stdin");
    printf ("\n use command scanf(\"%%d\", &age), where age is a variable name to store the input value, and & synbol denotes at which memory location this value will store");
    // int age = 0;
    // printf("\n Enter your age: ");
    // scanf("%d", &age);
    // printf("\n your age is %d", age);

    printf("\n to read char array or string value");
    printf ("\n use command scanf(\"%%s\", &arr), where arr is a variable name to store the value, and & synbol not required, because char[] name denotes the first char memory location");
    printf("\n space acts as terminate char and no value stores after the space, to read the complte string there is a different method: fgets");
    printf("\n fgets Syntax: fgets(arr, 20,stdin), where arr is variable name, 20 is length, stdin denoting the input is from console");
    char arr[20];
    printf ("\n Enter string value: ");
    scanf("%s", arr);
    fgets(arr, 20,stdin);
    printf("\n Value entered %s", arr);



}

