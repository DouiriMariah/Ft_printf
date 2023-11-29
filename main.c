#include "ft_printf.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int main()
{
    int integerNumber, ft_return, printf_return, negativeNumber;
    unsigned int unsignedInteger;
    char character;
    const char *string = "Hello World";
    void *pointer;

    integerNumber = 42;
    ft_return = 0;
    printf_return = 0;
    unsignedInteger = 123;
    character = 'A';
    negativeNumber = -314159;
    pointer = &integerNumber;

    printf("In the tests below, Mine = ft_printf and Real = printf results \n");
    printf("We do this to get the same return values\n");
    // Testing %d     
    printf("\nTesting %%d:\n");
    ft_return = ft_printf("Mine with an integer %%d: %d\n", integerNumber);
    printf_return = printf("Printf with an integer %%d: %d\n", integerNumber);
    printf("Output comparison: [ft_printf: %d] [printf: %d]\n", ft_return, printf_return);

    // Testing %i
    printf("\nTesting %%i:\n");
    ft_return = ft_printf("Mine with a negative integer %%i: %i\n", negativeNumber);
    printf_return = printf("Real with a negative integer %%i: %i\n", negativeNumber);
    printf("Output comparison: [ft_printf: %d] [printf: %d]\n", ft_return, printf_return);

    // Testing %u
    printf("\nTesting %%u:\n");
    ft_return = ft_printf("Mine with an unsigned integer %%u: %u\n", unsignedInteger);
    printf_return = printf("Real with an unsigned integer %%u: %u\n", unsignedInteger);
    printf("Output comparison: [ft_printf: %d] [printf: %d]\n", ft_return, printf_return);

    // Testing %c
    printf("\nTesting %%c:\n");
    ft_return = ft_printf("Mine with a character %%c: %c\n", character);
    printf_return = printf("Real with a character %%c: %c\n", character);
    printf("Output comparison: [ft_printf: %d] [printf: %d]\n", ft_return, printf_return);

    // Testing %X
    printf("\nTesting %%X:\n");
    ft_return = ft_printf("Mine with an unsigned integer in hexadecimal %%X: %X\n", unsignedInteger);
    printf_return = printf("Real with an unsigned integer in hexadecimal %%X: %X\n", unsignedInteger);
    printf("Output comparison: [ft_printf: %d] [printf: %d]\n", ft_return, printf_return);

    // Testing %x
    printf("\nTesting %%x:\n");
    ft_return = ft_printf("Mine with an unsigned integer in lowercase hexadecimal %%x: %x\n", unsignedInteger);
    printf_return = printf("Real with an unsigned integer in lowercase hexadecimal %%x: %x\n", unsignedInteger);
    printf("Output comparison: [ft_printf: %d] [printf: %d]\n", ft_return, printf_return);

    // Testing %s
    printf("\nTesting %%s:\n");
    ft_return = ft_printf("Mine with a string %%s: %s\n", string);
    printf_return = printf("Real with a string %%s: %s\n", string);
    printf("Output comparison: [ft_printf: %d] [printf: %d]\n", ft_return, printf_return);

    // Testing %p
    printf("\nTesting %%p:\n");
    ft_return = ft_printf("Mine with a pointer %%p: %p\n", pointer);
    printf_return = printf("Real with a pointer %%p: %p\n", pointer);
    printf("Output comparison: [ft_printf: %d] [printf: %d]\n", ft_return, printf_return);

    // Testing %%
    printf("\nTesting %%%%\n");
    ft_return = ft_printf("Mine with %%: %%\n");
    printf_return = printf("Real with %%: %%\n");
    printf("Output comparison: [ft_printf: %d] [printf: %d]\n", ft_return, printf_return);

    return 0;
}
