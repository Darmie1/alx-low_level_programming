#include "main.h"
/**
* flip_bits - This function hat returns the number of bits needed
* to flip to get from one number to another
* @n: the number of bits to return
* @m: bit needed
* Return: 0
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int REsultxor = n ^ m;
	unsigned int couNTS = 0;

	while (REsultxor)
	{
		couNTS += REsultxor & 1;
		REsultxor >>= 1;
	}
	return (couNTS);
}
