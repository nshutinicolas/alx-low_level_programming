#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - function to select the operation function
 * @s: operation to perform
 * Return: pointer to correct opreration
 */
int (*get_op_func(char *s)(int a, int b))
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_div}
	};
	int i;

	for (i = 0; ops[i].op != NULL; i++)
		if (*s == *ops[i].op)
			return (ops[i].f);
	return (NULL);
}
