#include "main.h"
/**
 *_memcpy - a function that copy memory area
 *@dest: where memroy is stored
 *@src: where memory is copied
 *@n:number of bytes
 *
 *Return: memory copied with n bytes chnaged
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
