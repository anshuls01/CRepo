cmake_minimum_required(VERSION 3.28)
project(LearningC C)

set(CMAKE_C_STANDARD 11)

add_executable(LearningC main.c
        Basics/DataTypes.h
        Basics/DataTypes.c
        Basics/PrintFBasics.h
        Basics/PrintFBasics.c
        Basics/ScanFBasics.h
        Basics/ScanFBasics.c
        FileSystem/ReadWriteFile.h
        FileSystem/BasicReadWriteFile.c
        Pointers/BasicPointers.h
        Pointers/BasicPointers.c
        Basics/CBasics.h
        Basics/CBasics.c
        Basics/CVariables.h
        Basics/CVariables.c
        Pointers/ConstAndPointer.h
        Pointers/ConstAndPointer.c
)
