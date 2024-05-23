//
// Created by AnshulS01 on 23/05/24.
//
#include <stdio.h>
#include "CVariables.h"
void PrintCVariablesBasic() {
    printf("\nC Variables");
    printf("\nRules for Naming Variables in C");
    printf("\n\tYou can assign any name to the variable as long as it follows the following rules:");
        printf("\n\t\t1. A variable name must only contain alphabets, digits, and underscore.");
        printf("\n\t\t2. A variable name must start with an alphabet or an underscore only. It cannot start with a digit.");
        printf("\n\t\t3. No whitespace is allowed within the variable name.");
        printf("\n\t\t4. A variable name must not be any reserved word or keyword.");
    printf("\n\nC Variable Types -> The C variables can be classified into the following types:");
    printf("\n 1. Local Variables");
    printf("\n 2. Global Variables");
    printf("\n 3. Static Variables");
        printf("\n\tA static variable in C is a variable that is defined using the static keyword. It can be defined only once in a C program and its scope depends upon the region where it is declared (can be global or local).");
        printf("\n\tThe default value of static variables is zero.");
        printf("\n\texample:");
        printf("\n\tvoid function()\n\t{\n\t\tint x = 20; // local variable\n\t\tstatic int y = 30; // static variable\n\t\tx = x + 10;\n\t\ty = y + 10;\n\t\tprintf(\"""\\tLocal: %%d\\n\\tStatic: %%d\\n\""", x, y);\n\t}");
        printf("\n\tint main()\n\t{\n\t\tprintf(\"""First Call\\n\""");\n\t\tfunction();\n\t\tprintf(\"""Second Call\\n\""");\n\t\tfunction();\n\t\tprintf(\"""Third Call\\n\""");\n\t\tfunction();\n\t\treturn 0;\n\t}");
        printf("\n\t Output: \n\t\tFirst Call\n\t\t\tLocal: 30\n\t\t\tStatic: 40\n\t\tSecond Call\n\t\t\tLocal: 30\n\t\t\tStatic: 50\n\t\tThird Call\n\t\t\tLocal: 30\n\t\t\tStatic: 60");
    printf("\n 4. Automatic Variables");
        printf("\n\tAll the local variables are automatic variables by default. They are also known as auto variables.");
        printf("\n\tTheir scope is local and their lifetime is till the end of the block. If we need, we can use the auto keyword to define the auto variables.");
        printf("\n\tThe default value of the auto variables is a garbage value.");
    printf("\n 5. Extern Variables");
        printf("\n\tSyntax: extern data_type variable_name;");
        printf("\n\tExample: extern int x=10;");
        printf("\n\tScope: Global");
        printf("\n\tExternal variables in C can be shared between multiple C files.");
    printf("\n 6. Register Variables");
        printf("\n\tRegister variables in C are those variables that are stored in the CPU register instead of the conventional storage place like RAM");
        printf("\n\tScope: Local, Default value: Garbage");
        printf("\n\tSyntax: register data_type variable_name = initial_value;");
        printf("\n\tExample: register int var = 22;");
        printf("\n\tWe cannot get the address of the register variable using addressof (&) operator because they are stored in the CPU register. The compiler will throw an error if we try to get the address of register variable.");
}
