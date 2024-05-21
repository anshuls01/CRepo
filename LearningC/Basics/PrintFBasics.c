//
// Created by Anshuls01 on 22/05/
// credit: https://www.geeksforgeeks.org/printf-in-c/
//

#include <stdio.h>
#include "PrintFBasics.h"
void printPrintFRules() {
    printf("\n");

    printf("printf basics:\n");
    printf("--------------\n");
    printf("\n");
    printf("Syntax of Format Specifier: %[flags][width][.precision][length]specifier");
    printf("\n");
    printf("specifier \n");
    printf("1. %%d for printing integers \n");
    printf("2. %%f for printing floating-point numbers \n");
    printf("3. %%c for printing characters \n");
    printf("4. %%s for printing strings \n");
    printf("5. %%p for printing memory addresses \n");
    printf("6. %%x for printing hexadecimal values\n");
    printf("\n");
    printf("\nWidth");
    printf("\n It is the sub-specifier that denotes the minimum number of characters that will be printed.");
    printf("\n If the number of characters is less than the specified width, the white space will be used to fill the remaining characters’ places. But if the number of characters is greater than the specified width, all the characters will be still printed without cutting off any.");
    int num = 123456;
    printf("\n\n width Example:\n");
    printf(" 1. Printing num with width 10: ");
    int chars_printed = printf("%10d", num);
    printf("\n   Number of characters printed: %d \n",chars_printed);
    printf(" 2. Printing num with width 3: ");
    chars_printed = printf("%*d", 3, num);
    printf("\n   Number of characters printed: %d",chars_printed);
    printf("\n   if the number of characters is greater than the specified width, all the characters will be printed");

    printf("\n");
    printf("\nPrecision");
    printf("\n Precision subspecifier meaning differs for different format specifiers it is being used with.");
    printf("\n For Integral data(d, i, u, o, x, X): Specifies the minimum number of digits to be printed. But unlike the width sub-specifier, instead of white spaces, this sub-specifier adds leading zeroes to the number. If the number has more digits than the precision, the number is printed as it is.");
    printf("\n For Float or Double Data(f, e, a, A): Specifies the number of digits to be printed after the decimal point.");
    printf("\n For String (s): Specifies the length of the string to be printed.");
    printf("\n\n precision Example:");
    int num1 = 2451;
    float dec = 12.45126;
    char* str = "GeeksforGeeks";
    // precision for integral data
    printf("\n 1. For integer %d, preciosn to 10 digits [%%.10d], displays: %.10d", num1, num1);
    // precision for numbers with decimal points
    printf("\n 2. For floating number %f, preciosn to decimal point [%%.2f] displays: %.2f", dec, dec);
    // for strings
    printf("\n 3. For string %s, precision to 5 length [%%.5s] displays : %.5s", str, str);

    printf("\n\n");
    printf("Length");
    printf("\n Specifies the length of the data type in the memory. It is used in correspondence with data type modifiers.");
    printf("\n There are 3 length sub-specifiers:");
    printf("\n \t h: With short int and unsigned short int");
    printf("\n \t l: With long int and unsigned long int.");
    printf("\n \t L: With long double");

    printf("\n Length Example: ");
    long var = 3000000000;
    // printing var using %d
    printf("\n1. Using %%d: %d", var);
    // printing var using %ld
    printf("\n2. Using %%ld: %ld", var);
}