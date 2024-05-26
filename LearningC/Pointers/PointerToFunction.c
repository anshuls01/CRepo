//
// Created by Anshuls01 on 26/05/24.
//

#include <stdio.h>
#include "PointerToFunction.h"


typedef int (*pointerToFunction)(int);
typedef int (*ArrayOfFunctionPointer)(int,int);
int square(int a) {
    return a*a;
}
void BasicPointerToFunction() {
    printf("\n**************************************");
    printf("\n Function pointers are typically used when handling asynchornous events");
    printf("\n Events can happen at unpredicatble moments and which have to be able to trigger a function call.");
    printf("\n for example: call a certain function when an event fires to signal that the last document in a printer queue has been printed");
    printf("\n Syntax: int (*test)(int); //test is pointer to function, first int is return type and second int is as anrgumet expected by the fucntion");
    printf("\n\r assign pointer to a function with matching signature: test = square;");
    printf("\n\t Where Square function is defined somewhere else with a signature: int Square(int){}");
    printf("\n call square method using: test(4); // 16 output will be return");
    int (*test)(int);
    test = square;
    printf("\n %d",test(4));
    printf("\n");
    printf("\n Typedef also can be used, syntax: typedef int (*pointerToFunction)(int);");
    printf("\n its same as delegate, pointerToFunction can be assigned to any function which matches the signature (return type and argument)");
    printf("\n let';'s initialize the typedef in the calling function like: pointerToFunction pfi;");
    pointerToFunction pfi;
    printf("\n assin pointer to function address. pfi = &square or pfi=square both are valid, since function name return the address");
    pfi = square;
    printf("\n call square method using: test(4); // 16 output will be return");
    int result = pfi(4);
    printf("\n %d",result);
    printf("\n**************************************");
}

int sum(int a, int b) {
    return a+b;
}
int minus(int a, int b) {
    return a-b;
}
int multiply(int a, int b) {
    return a*b;
}
void DemoArrayOfFunctionPointer() {
    printf("\n**************************************");
    printf("\n Function pointer array -> yes true, it's a way to call multiple function with a single pointer");
    printf("\n We have 3 functions:\n\t 1. int sum(int,int)\n\t 2. int minus(int,int)\n\t 3. int multiply(int,int)");
    printf("\n Declare a Function to pointer array");
    printf("\n for example: ArrayOfFunctionPointer arrayoffunctionPointer[] = {sum, minus, multiply};");
    printf("\n Call all function in a loop: \n\t for(int i = 0;i<3;i++) {\n\t\tprintf(\"result: %%d\",arrayoffunctionPointer[i](5,4));\n\t}");
    ArrayOfFunctionPointer arrayoffunctionPointer[] = {sum, minus, multiply};

    for(int i = 0;i<3;i++) {
        printf("\n result: %d",arrayoffunctionPointer[i](5,4));
    }
}

void fun1() {
    printf("\n first function");
}
void fun2() {
    printf("\n second function");
}
//protoype
void calledfunction(void (*fun)());
typedef void (*funcArgument)();

void DemoPassFunctionPointerAsArgument() {
    printf("\n**************************************");
    printf("\n Function pointer can be passed as an argument");
    printf("\n This is also called function callback.");
    printf("\n e.g. calledfunction(fun1); where \n fun1 -> \n\t void fun1() {\n\t\t printf(\"first function\");\n\t }");
    printf("\n calledfunction -> \n\t void calledfunction(void (*fun)()) {\n\t\t fun();\n\t }");
    calledfunction(fun1);
    calledfunction(fun2);
    printf("\n");
    printf("\n Function pointer array can be used to pass as an argument");
    printf("\n e.g. funcArgument func[] = {fun1,fun2};");
    printf("\n funcArgument is a typedef -> typedef void (*funcArgument)();");
    printf("\n define array -> funcArgument func[]={fun1,fun2};");
    printf("\n function calling -> \n\t for(int i = 0;i<2;i++) { \n\t\t calledfunction(func[i]); \n\t}");
    printf("\n calledfunction -> \n\t void calledfunction(void (*fun)()) {\n\t\t fun();\n\t }");
    funcArgument func[] = {fun1,fun2};
    for(int i = 0;i<2;i++) {
        calledfunction(func[i]);
    }
}
void calledfunction(void (*fun)()) {
    fun();
}

