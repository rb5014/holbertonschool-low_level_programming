#include "3-calc.h"
/**
 * get_op_func - selects the correct function to perform the operation asked \
 * by the user (no other function declaration allowed)
 *
 * @s: operator passed as argument to the program
 *
 * Return: pointer to the function that corresponds to the operator given as a\
 * parameter (ex: get_op_func("+") return pointer to the function op_add)
 * if s does not match any of the operators, return NULL;
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
