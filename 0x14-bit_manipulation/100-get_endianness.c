#include "main.h"
/**
 * get_endianness - check the code.
 *
 * Return: s
 *
 */
int get_endianness(void)
{
	unsigned int i;
	char *sch;

	i = 1;
	sch = (char *) &i;
	return (*sch);
}
