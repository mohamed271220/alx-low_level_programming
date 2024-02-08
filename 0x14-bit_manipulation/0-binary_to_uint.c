#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: string containing the binary number
*
* Return: the converted number, or 0 if
* there is one or more chars in the string b that is not 0 or 1
* or b is NULL
*/


unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len;

	unsigned int dec_val;

	dec_val = 0;
	if (b == NULL)
		return (0);
	len = strlen(b);
	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}
	return (dec_val);
}
