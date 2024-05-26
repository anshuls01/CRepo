//
// Created by Anshuls01 on 23/05/24.
// credit:: https://www.geeksforgeeks.org/const-qualifier-in-c/?ref=lbp

#include <stdio.h>
#include "ConstAndPointer.h"


void printConstAndPointerRule() {
    printf("\n Const & Pointer \n");
    printf("\n\t Context: we may change the value of the const variable by using a pointer");
    printf("\n\t 1. Pointer to Constant:");
    printf("\n\t const int *ptr or int const *ptr, both are same.");
    printf("\n\t\t We can change the pointer to point to any other integer variable, but cannot change the value of the object (entity) pointed using pointer ptr. \n\t\t "
           "The pointer is stored in the read-write area (stack in the present case). The object pointed may be in the read-only or read-write area.");
    printf("\n\t\t For Example:");
    printf("\n\t\t int i = 10; \n\t\t int j = 20;");
    int i = 10;
    int j = 20;
    printf("\n\t\t /* ptr is pointer to constant */ \n\t\t const int* ptr = &i;");
    /* ptr is pointer to constant */
    const int* ptr = &i;
    printf("\n\t\t printf(\"ptr: %%d\", *ptr);");
    printf("\n\t\t\t output -> ptr: %d", *ptr);
    printf("\n\t\t /* error: object pointed cannot be modified using the pointer ptr */");
    printf("\n\t\t *ptr = 100; //this statement will throw error.");
    printf("\n\t\t ptr = &j; /* valid */ that means reference can change but not the pointer value");
    ptr = &j; /* valid */
    printf("\n\t\t printf(\"ptr: %%d\", *ptr);");
    printf("\n\t\t\t output -> ptr: %d", *ptr);
    printf("\n");
    printf("\n\t 2. constant Pointer to Variable: Syntax: int *const ptr;");
    printf("\n\t\t we can change the value of the object pointed by the pointer, but cannot change the pointer to point to another variable.");
    printf("\n\t\t For Example: ");
    printf("\n\t\t int x = 10;\n\t\t int *const cptr = &x;\n\t\t printf(\"%%d\", *cptr);// Output will be 10\n\t\t *cptr = 20;\n\t\t printf(\"%%d\", *cptr); // output will be 20\n\t\t int y = 20;"
    "\n\t\t // cptr = &y; //invalid statement, constant pointer to variable, address can't be change");
    int x = 10;
    int *const cptr = &x;
    printf("\n\t\t %d", *cptr);
    *cptr = 20;
    printf("\n\t\t %d", *cptr);
    int y = 20;
    // cptr = &y; //invalid statement
    printf("\n");
    printf("\n\t 3. constant Pointer to const: Syntax: const int *const ptr; or int *const const ptr;");
    printf("\n\t\t The above declaration is a constant pointer to a constant variable which means we cannot change the value pointed by the pointer as well as we cannot point the pointer to other variables.");
    printf("\n\t\t For example: \n\t\t int g = 10; \n\t\t int h = 20; \n\t\t /* constant pointer to constant integer */ \n\t\t const int* const cpointer = &g;"
           "\n\t\t printf(\"constant pointer pointing to : %%d\", *cpointer) // output is: 10;"
            " \n\t\t // cpointer = &h; /* error */ \n\t\t // *cpointer = 100; /* error */");
    int g = 10;
    int h = 20;
    /* constant pointer to constant integer */
    const int* const cpointer = &g;
    printf("\n\t\t constant pointer pointing to : %d\n", *cpointer);
    // cpointer = &h; /* error */
    // *cpointer = 100; /* error */
    printf("\n");
    printf("\n *************************************");
    printf("\n There is concept of up qualification and down qualification, check details here: https://www.geeksforgeeks.org/const-qualifier-in-c/?ref=lbp"
    "\n in the nutshell:\n Down Qualification -> const variable reffered by non const pointer. down qualification is not allowed in C++, in C depends on compiler, warning can be thrown"
    "\n Up qualification -> non const variable can be referred by const pointer. up qualification is automatic.");
    printf("\n up qualification: \n int const i = 10; \n int j = 20;\n int const *ptr;\n ptr = &i; // here const pointer is refered to const int");
    printf("\n *p=100; // certainly will throw error, const value can't change");
    printf("\n p=&j; // this statement is valid, however j variable is not constant, but can be refered by const pointer, this is called up qualification");
    printf("\n\n");
    printf("\n Down Qualification example: \n int i = 10;\n int const j = 20;\n int* ptr = &i;//valid statement\n ptr=&j;//down qualification, const variable reffered by non const pointer." );
    printf("\n ************************************* \n");
}