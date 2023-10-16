#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, with the terminating nullbyte
 * @dest: the buffer recieving the string
 * @src: the string to copy
 * Return: the pointer to the destination dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
