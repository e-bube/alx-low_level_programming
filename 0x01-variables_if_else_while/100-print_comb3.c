#include <stdio.h>
/**
  * main - Entry point
  * Return: 0
  */
int main(void)
{
int d1;
int d2;

for (d1 = 48; d2 <= 78; d1++)
{
for (d2 = d1 + 1; d2 <= 78; d2++)
{
putchar(d1);
putchar(d2);

if ((d1 == 56) && (d2 == 78))
break;

putchar(',');
putchar(' ');
}
}

putchar('\n');
return (0);
}
