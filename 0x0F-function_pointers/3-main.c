#include "3-calc.h"
/**
 * main - check the code
 * @argc: size of argv
 * @argv: array of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int (*funcar2)(int, int), ar1, ar3;

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	ar1 = atoi(argv[1]);
	ar3 = atoi(argv[3]);
	funcar2 = get_op_func(argv[2]);
	printf("%d\n", funcar2(ar1, ar3));
	return (0);
}
