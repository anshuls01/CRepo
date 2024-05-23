//
// Created by Anshuls01 on 23/05/24.
// credit :: https://www.geeksforgeeks.org/
#include <stdio.h>
#include "CBasics.h"
void PrintBasics() {

    printf ("Compilation steps: \n");
    printf("\n 1. Source File");
    printf("\n 2. Pre-Processor  -- remove comment, expand header, expend macros extra, condition compile, generates filename.i");
    printf("\n 3. compiler  --> generates filename.s");
    printf("\n 4. Assembler -> contains machine level instruction, generates filename.o");
    printf("\n 5. Linker --> generates executable");
    printf("\n");
    printf("\ntokens in c:");
    printf("\n 1. Keywords");
    printf("\n 2. Identifiers");
    printf("\n 3. Constants");
    printf("\n 4. Strings");
    printf("\n 5. Special Symbols");
    printf("\n 6. Operators");
    printf("\n more info: https://www.geeksforgeeks.org/tokens-in-c/?ref=lbp");
    printf("\n");
}
