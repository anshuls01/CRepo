#include <stdio.h>
#include <string.h>
#include "Basics/CBasics.h"
#include "Basics/CVariables.h"
#include "Basics/DataTypes.h"
#include "Basics/PrintFBasics.h"
#include "Basics/ScanFBasics.h"
#include "FileSystem/ReadWriteFile.h"
#include "Pointers/BasicPointers.h"
#include "Pointers/PointersAndArray.h"
#include "Pointers/ConstAndPointer.h"
#include "Pointers/GenericPointer.h"
#include "Pointers/PointerToFunction.h"
#include "MemoryManagement/AllocatingMemory.h"
#include "DataStructure/linkedlist.h"

int main(void)
{
    // printf("Hello, World!\n");
    // int a = 10;
    // printf("address of a : %p", &a);

     // PrintBasics();
     // PrintCVariablesBasic();

    // DifferentDataTypes();
    // printPrintFRules();
    // printScanffBasicUsage();


    // declareBasicPointer();
    // printConstAndPointerRule();
    // PontersWithArray();
    // PointersWith2DArray();
    // PointersToStringArray();
    // UnderstandingGenericPointer();
    BasicPointerToFunction();
    DemoArrayOfFunctionPointer();
    DemoPassFunctionPointerAsArgument();
    // DynamicMemoryAllocation();

    // writeAndReadFile();


    return 0;
}

