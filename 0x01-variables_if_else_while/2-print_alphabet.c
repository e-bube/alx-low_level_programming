#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success/correct)
  */

int main(void)
{
char lowerCaseAlphabets;

for (lowerCaseAlphabets = 'a'; lowerCaseAlphabets <= 'z'; lowerCaseAlphabets++)
{
putchar(lowerCaseAlphabets);
}
putchar('\n');
return (0);
}
