//
// Created by Anshuls01 on 22/05/24.
//
#include <stdio.h>
#include "ReadWriteFile.h"

void writeAndReadFile() {
    writeToFile();
    readFromFile();
}
void readFromFile() {
    char line[255];
    FILE *fPointer = fopen("emplpoyee.txt","r");
    fgets(line,255,fPointer);
    printf("%s\n", line);
    fgets(line,255,fPointer);
    printf("%s\n", line);
    fclose(fPointer);
}
void writeToFile() {
    FILE *fPointer = fopen("emplpoyee.txt","a");
    fprintf(fPointer,"first line \nsecond pointer \nthird line");
    fclose(fPointer);
}