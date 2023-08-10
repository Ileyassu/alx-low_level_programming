#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the sizes of various data types
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Size of char: %u byte(s)\n", sizeof(char));
    printf("Size of int: %u byte(s)\n", sizeof(int));
    printf("Size of long: %u byte(s)\n", sizeof(long));
    printf("Size of long long: %u byte(s)\n", sizeof(long long));
    printf("Size of float: %u byte(s)\n", sizeof(float));

    return (0);
}

