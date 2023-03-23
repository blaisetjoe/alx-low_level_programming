#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - return sum
 * @a: int
 * @b: int
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract
 * @a: int
 * @b: int
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 * @a: int
 * @b: int
 *
 * Return: quotient of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide
 * @a: int
 * @b: int
 *
 * Return: remainder
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns remainder
 * @a: int
 * @b: int
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
