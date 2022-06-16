#include "main.h"

/**
 * *_strcat - function commute string
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: value of dest
 */
char *_strcat(char *dest, char *src)
{
	int i=0;
	int j=0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
		i++;
	}
	dest[i] ='\0';
	return (dest);
}
