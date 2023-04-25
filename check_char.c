/**
 * check_char - checks if a character is a valid conversion specifier
 * @type: the character to check
 *
 * Return: 1 if the character is a valid conversion specifier, 0 otherwise
 */
int check_char(char type)
{
	int i;
	char types[] = {'c', 's', '%'};

	int types_length = sizeof(types) / sizeof(char);

	for (i = 0; i < types_length; i++)
	{
		if (types[i] == type)
			return (1);
	}

	return (0);
}
