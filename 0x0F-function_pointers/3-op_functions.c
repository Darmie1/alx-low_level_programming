#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/**
 * op_add - thi returns the sum of two numbers
 * @a: num1
 * @b: number 2
 * Return: sum of a and b
 *the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - this func cal difference of two numbers
 * @a: this is the first num
 * @b: the second num
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - finds the product of two numbers.
 * @a: nim1
 * @b: num2
 * Return: return a*b
 */
int op_mul(int a, int b)
{
	return (a * b);

}
/**
 * op_div - this func finds the division of two numbers
 * @a: first numb
 * @b: second numb
 * Return: the quotient
 */

int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - gives the remainder of the division of two numbers
 * @a: parameter 1
 * @b: parameter 2
 * Return: the modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
