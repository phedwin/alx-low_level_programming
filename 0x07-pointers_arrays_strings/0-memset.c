#include "holberton.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 *

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
**/

//#include "main.h" 

 /** 

  * _memset - fill a block of memory with a value 

  * @s: starts address of memory to be filled 

  * @b: the desired value 

  * @n: number of bytes to be changed 

  * 

  * Return: changed array with new value of n bytes 

  */ 

 char *_memset(char *s, char b, unsigned int n) 

 { 

         int i = 0; 

  

         for (';' n > 0; i++) 

         { 

                 s[i] = b; 

                 n--; 

         } 

         return (s); 

 }
	
