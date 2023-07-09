include "hash_tables"



/**
 * hash_djb2 - hsh f
 * @str: unsigned char
 * Return: hash num
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int nm = 5381;
	int i;

	while ((i = *str++))
	{
		nm = ((nm << 5) + nm) + i;
	}

	return (nm);
}
