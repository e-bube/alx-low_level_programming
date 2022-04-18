#include <stdio.h>
/**
  * main - Entry point
  * Return: 0
  */
int main(void)
{
char alphabets;

for (alphabets = 122 ; alphabets >= 97; alphabets--)
{
putchar(alphabets);
}
putchar('\n');
return (0);
}
