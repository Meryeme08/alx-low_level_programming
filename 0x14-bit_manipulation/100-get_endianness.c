#include "main.h"
#include <stdint.h>

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	uint16_t num = 0x0100;
	uint8_t *p = (uint8_t *)&num;

	return ((*p == 1) ? 1 : 0);
}
