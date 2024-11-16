// Input/output functions (printf, scanf, etc.)
#include <stdio.h>
// String manipulation functions (strlen, strcpy, etc.)
#include <string.h>
// General utilities (memory, conversion, etc.)
#include <stdlib.h>
// Boolean type and values
#include <stdbool.h>
// Character type functions (toupper, isdigit, etc.)
#include <ctype.h>
// Mathematical functions (sqrt, pow, etc.)
#include <math.h>
// Program to demonstrate usage of standard library functions
char *toUpperCase(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; ++i)
        str[i] = toupper(str[i]);
    return str;
}
// int main()
// {
//     // Using stdio.h for input/output
//     char name[50] = "idris";
//     printf("Enter your name: ");
//     //    scanf("%s", name);

//     printf("Hello, %s!\n", name);

//     // Using string.h for string manipulation
//     int len = strlen(name);
//     printf("Length of your name: %d\n", len);

//     // Using stdlib.h for number conversion
//     char numStr[] = "1238888888";
//     int num = atoi(numStr);
//     printf("String to integer conversion: %d\n", num);

//     // String to float conversion
//     char floatStr[] = "3.145623";
//     float floatNum = strtof(floatStr, NULL);
//     printf("String to float conversion: %.6f\n", floatNum);

//     // String to double conversion
//     char doubleStr[] = "3.1456231212124566";
//     double doubleNum = strtod(doubleStr, NULL);
//     printf("String to double conversion: %.16lf\n", doubleNum);

//     // Using stdbool.h for boolean operations
//     bool isValid = true;
//     printf("Boolean value: %d\n", isValid);

//     // Using ctype.h for character manipulation
//     printf("Uppercase of first letter: %c\n", toupper(name[0]));

//     // Using math.h for mathematical operations
//     double number = 16.0;
//     printf("Square root of 16: %.2f\n", sqrt(number));
//     printf("Uppercase name: %s\n", toUpperCase(name));
//     return 0;
// }