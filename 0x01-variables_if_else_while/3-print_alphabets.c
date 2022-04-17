#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success/correct)
  */
int main(void)
{
char lowerCase;
char upperCase;

for (upperCase = 'A'; upperCase <= 'Z'; upperCase++)
{
putchar(upperCase);
}

for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
{
putchar(lowerCase);
}
putchar('\n');
return (0);
}
