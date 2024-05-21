#include <stdio.h>
#include "Basics/DataTypes.h"
#include "Basics/PrintFBasics.h"
#include "Basics/ScanFBasics.h"

int main(void)
{
    printf("Hello, World!\n");
    int a = 10;
    printf("address of a : %p", &a);

    DifferentDataTypes();
    printPrintFRules();
    printScanffBasicUsage();
    return 0;
}
