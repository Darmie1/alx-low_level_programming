#include "main.h"

/**
 * get_endianness - this function creates a union with a
 * 4byte interger and a 1 byte array of the same size
 * to check the endianess
 * Return: it returns an int
 */

int get_endianness(void)
{
	unsigned int examine = 1;
	unsigned char *ptexam = (unsigned char *)&examine;

	return ((*ptexam == 1) ? 1 : 0);
}
