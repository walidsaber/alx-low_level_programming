#include "variadic_functions.h"

/**
 * print_all - print all types.
 * @format: format type.
 * @...: var number.
 * Description: return any type.
 */

void print_all(const char * const format, ...)
{
	va_list type;
	char *s_val, c_val;
	int i_val, i;
	float f_val;

	va_start(type, format);
	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c_val = va_arg(type, int);
				printf("%c", c_val);
				break;
			case 'i':
				i_val = va_arg(type, int);
				printf("%d", i_val);
				break;
			case 'f':
				f_val = va_arg(type, double);
				printf("%f", f_val);
				break;
			case 's':
				s_val = va_arg(type, char *);
				if (s_val == NULL)
					printf("(nil)");
				else
					printf("%s", s_val);
				break;
			default:
				break;
		}
		if (format[i - 1] && format[i + 1])
			printf(", ");	
		i++;
	}
	putchar('\n');
	va_end(type);
}
