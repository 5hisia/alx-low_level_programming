#include <stdlib.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: always 0
 */
int main (void)
{
int n;
printf("input a number");
scanf("%d", &n);
if (n > 0)
printf("%d is a positive \n", n);
else if (n < 0)
printf("%d is a negative \n", n);
else
printf("%d is zero \n", n);
}
 
