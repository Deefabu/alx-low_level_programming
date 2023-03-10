#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer variablr to the destination variable
 * @src: pointer variable to the source variable
 *
 * Return: the destination variable after concatenating
 */
char *_strcat(char *dest, char *src)
{
	int length = 0, itr;

	while (dest[length])
		length++;
	for (itr = 0; src[itr] != '\0'; itr++)
	{
		dest[length] = src[itr];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
