/*
 * File: 3-print_alphabets.c
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 * Use putchar not printf, puts
 * code in main
 * use putchar only twice
 *
 * Return: Always 0.
 */

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);

putchar('\n');
return (0);
}
