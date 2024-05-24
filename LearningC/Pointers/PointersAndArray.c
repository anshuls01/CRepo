//
// Created by AnshulS01 on 24/05/24.
//
#include <stdio.h>;
#include "PointersAndArray.h"

void PontersWithCharArray() {
    printf("\n**************************************");
    printf("\nC doesn't have dedicated String data type");
    printf("\ninstead in C, string is char array");
    printf("\narary name returns first address of Array");
    printf("\nC adds null char \\0 at the end of char array");
    printf("\nSo size of array is always one byte bigger, sizeof(char[4])==5");
    printf("\n**************************************");
    printf("\n");
    printf("\nExample:\n");
    char arr[] = "Hello World";
    int i = 0;
    while(arr[i]!='\0') {
        printf("%c",arr[i]);
        i++;
    }
    printf("\narray stored value is %s, %%s can be use to print the whole array", arr);
    printf("\nsize of array: %lu, extra one size is coming because of null pointer \\0", sizeof(arr));
    printf("\nfirst char of array: printf(\"%%c\", arr[0]) == %c", arr[0]);
    printf("\nAddress of array: printf(\"%%p\", arr) == %p", arr);
    printf("\nAddress of array: printf(\"%%p\", &arr) == %p", &arr);
    printf("\nAddress of first char in array: printf(\"%%p\", &arr[0]) == %p", &arr[0]);
    printf("\nthat means dealing with array in C is dealing with address or can say dealing with pointers");
    printf("\nfor the same reason, array always pass by reference not the pass by value");

    printf("\n**************************************");
    printf("\n");
    printf("\nArray can be declared in two ways in C");
    printf("\n\t char str[] = \"Hello\"");
    printf("\n\t char *str2 = \"World\"");
    printf("\nBut both the array are not same, str is char array & str2 is pointer to \"World\" string");
    printf("\nFor Example: ");
    char str[] = "Hello";
    char *str2 = "World";
    printf("\nprintf(\"%%s\\t%%p\\t%%p\", str, &str, str) value is %s\t%p\t%p", str, &str, str);
    printf("\nin the above example both address value of &str and str is same, because char array name returns first memory location address, i.e. same as &str or &str[0]");
    printf("\n");
    printf("\nprintf(\"%%s\\t%%p\\t%%p\", str2, &str2, str2) value is %s\t%p\t%p", str2, &str2, str2);
    printf("\nin the above example both address value of &str2 and str2 is different, because str2 is a pointer varible [pointer to char array]");
    printf("\n&str2 returns the pointer address, str2 returns the value stored at str2 i.e. first address of string \"World\"");
    str2 = str;
    printf("\n");
    printf("\nlets say: str2 = str or str2 = &str, i.e. now str2 holds value of str address, lets check the value of str2");
    printf("\nprintf(\"%%s\\t%%p\\t%%p\", str2, &str2, str2) value is %s\t%p\t%p", str2, &str2, str2);
    printf("\n**************************************");
    printf("\n");


    printf("\nMultiple Dereferencing (Indirection) of pointer");
    int data[3];
    int *pi;
    int **ppi;
    printf("\nMultiple indirection example");
    for(int i = 0;i<3;i++) {
        data[i]= i;
    }
    printf("\n");
    for(int i = 0;i<3;i++) {
        printf("\t%d", data[i]);
    }

    pi = data; // or pi = &data or pi = &data[i]
    ppi = &pi;

    for(int i = 0;i<3;i++) {
        printf("\n");
        printf("\n Loop[%d] array address is %p", i, data);
        printf("\n item pointed to by pi is %d", *pi);
        printf("\n item pointed to by ppi is %p", *ppi);
        printf("\n item pointed to double indirection of ppi is %d", **ppi);
        printf("\n The address of pi  is %p and the value of pi (what is points to) is %p", &pi,ppi);
        printf("\n The value of pi is %p and it's point to %d", pi,*pi);
        pi = pi+1;
    }
}
void PointersToStringArray() {
    printf("\n**************************************");
    printf("\nDeclare a string array in C");
    printf("\nSyntax to declare string array in C is: char *words[3]");
    printf("\nWhile char array declration can be done in two ways");
    printf("\n\t char str[] = \"Hello\"");
    printf("\n\t char *str2 = \"World\"");
    char *words[3];
    printf("\nTo understand the above think words[0], words[1], words[2] are 3 different char array in words");
    printf("\nAnd words[0] will give the first char address, while printf(\"%%s\",words[0]) will return the whole string stored at words[0]");
    printf("\nwords[0] can be declared as char str[] or char *str");
    printf("\nThat means string array is pointer to pointer to char array (string) and can be declared as char **stringPtr");
    printf("\nExample: ");
    printf("\nchar *words[3];");
    printf("\nwords[0] = \"Zero\";");
    printf("\nwords[1] = \"One\"; ");
    printf("\nwords[2] = \"Two\"; ");
    printf("\nchar **stringPtr[3];");
    printf("\nstringPtr[0] = \"Zero\";");
    printf("\nstringPtr[1] = \"One\"; ");
    printf("\nstringPtr[2] = \"Two\";");
    printf("\nboth the above declaration are same");
    printf("\nthat means a **ppc [pointer to pointer charcter] can hold the starting address of string array");
    printf("\nlike, \n char *pi; \n char arr[3]; \n pi=arr; //or pi=&arr");
    printf("\nMore precisely \n char **ppc;\n ppc=words;");
    printf("\nAND ppc+1 give the starting address of words[1] and so on");
    printf("\none derefrence of ppc will give the starting address of words[0]/words[1]/words[2] depends on ppc reference that time");
    printf("\nthat means: \n char *pc; \n pc = *ppc;");
    printf("\nthat means: *pc will give the first char value");
    words[0] = "Zero";
    words[1] = "One";
    words[2] = "Two";
    char **stringPtr[3];
    stringPtr[0] = "Zero";
    stringPtr[1] = "One";
    stringPtr[2] = "Two";
    printf("\nlets see the output below: ");
    char **ppc;
    char *pc;
    char **sPPtr;
    char *sPtr;
    sPPtr=stringPtr;
    for(int i = 0;i<3;i++) {
        ppc = words +i;
        pc = *ppc; // address of ppc
        printf("\nPPC address is %p, derferenced value *ppc %p, PPC valus is %p, Address of words %p", &ppc,*ppc, ppc, words);
        printf("\nPC address is %p, derferenced value *pc %p,PC valus is %p", &pc, *pc, pc);
        printf("\nwords[%d] address is: %p",  i, words[i]);
        while(*pc!=0) // de-referencing pointer again will give the actual char stored
        {
            printf("\nPC address is %p,PC valus is %p, derferenced value *ppc %p", &pc, pc, *ppc);
            printf("  %c ", *pc);
            pc = pc+1;
        }
        printf("\n");
    }


    for(int i = 0;i<3;i++) {
        sPPtr = stringPtr +i;
        sPtr = *sPPtr; // address of ppc
        printf("\nsPPtr address is %p, derferenced value *sPPtr %p, sPPtr valus is %p, Address of stringPtr %p", &sPPtr,*sPPtr, sPPtr, sPtr);
        printf("\nsPtr address is %p, derferenced value *sPtr %p,sPtr valus is %p", &sPtr, *sPtr, sPtr);
        printf("\nstringPtr[%d] address is: %p",  i, stringPtr[i]);
        while(*sPtr!=0) // de-referencing pointer again will give the actual char stored
        {
            printf("\nsPtr address is %p,sPtr valus is %p, derferenced value *sPPtr %p", &sPtr, sPtr, *sPPtr);
            printf("  %c ", *sPtr);
            sPtr = sPtr+1;
        }
        printf("\n");
    }

}