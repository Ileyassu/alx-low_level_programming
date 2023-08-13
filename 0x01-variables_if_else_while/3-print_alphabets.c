#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int letter = 'a';

        while (letter <= 'z')
        {
                putchar(letter);
                letter++;
	}

	letter = 'A';
	
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	return(0);
}
