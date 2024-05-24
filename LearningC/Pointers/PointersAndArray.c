//
// Created by AnshulS01 on 24/05/24.
//
#include <stdio.h>;
#include "PointersAndArray.h"

void PontersWithArray() {
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
}
