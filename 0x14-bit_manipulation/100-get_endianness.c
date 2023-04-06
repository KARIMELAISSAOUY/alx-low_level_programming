#include "main.h"


int get_endianness(void)
{
	unsigned int test = 1;
	char *endian = (char *)&test;

/**
 *alx
 */
	if (*endian)
		return (1);
	return (0);

}
