#include <stdio.h>
/**
 * main - Accept empty value
 * Return: (0) if is correct
 * Description: Write a program that prints all the numbers of base 16
 * in lowercase, followed by a new line.
 */
int main(void)
{
int ch, hc;
for (ch = '0' ; ch <= '9' ; ch++)
{
for (hc = '0' ; hc <= '9' ; hc++)
{
putchar(ch);
putchar(hc);
putchar(',');
putchar(' ');
}
}
putchar ('\n');
return (0);
}
