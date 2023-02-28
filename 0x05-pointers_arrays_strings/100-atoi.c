/**
 * _atoi - Converts a string to an integer.
 *
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;
	char c;

	while (*s != '\0')
	{
		c = *s++;
		if (c == '-')
			sign *= -1;
		else if (c >= '0' && c <= '9')
			result = result * 10 + (c - '0');
		else if (result > 0)
			break;
	}
	return (result * sign);
}

